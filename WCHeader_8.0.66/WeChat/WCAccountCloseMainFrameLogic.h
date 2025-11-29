@protocol WCAccountCloseMainFrameLogicDelegate;

@interface WCAccountCloseMainFrameLogic : WCAccountBaseControlLogic {
    unsigned int m_uiScene;
    unsigned long long m_lastAutoAuthTime;
    unsigned long long m_startCloseTime;
}

@property (weak, nonatomic) id<WCAccountCloseMainFrameLogicDelegate> delegate;

- (void)startLogic:(unsigned int)a0 lastAutoAuthTime:(unsigned long long)a1;
- (void)endCloseMainFrame;
- (void).cxx_destruct;

@end
