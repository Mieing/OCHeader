@interface NetCmdSendOnlyEvent : CBaseEvent {
    int m_cmdstatus;
}

@property (nonatomic) struct INetCmdSendOnly { void /* function */ **x0; } *m_netcmd;

- (id)init;
- (void)dealloc;
- (void)TryStart;
- (void)Stop;
- (void)NotifyFromPrtl:(unsigned int)a0 MessageInfo:(id)a1;

@end
