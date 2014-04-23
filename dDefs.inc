{$IFNDEF CPUX64} 
  {$IFNDEF CPUX86}
    {$DEFINE CPUX86}
  {$ENDIF}
{$ENDIF}

{$IFDEF DEBUG}
{$R+} // Range check On
{$ENDIF}

{$DEFINE UseInline}

{$IF CompilerVersion >17}
{$DEFINE CanInline}
{$ENDIF}

{$IF DEFINED(UseInline) and DEFINED(CanInline)}
{$DEFINE MustInline}
{$ENDIF}