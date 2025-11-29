@class InitLogicController;

@interface PreEnterInitStep : PreEnterBaseStep <initLogicControllerDelegate> {
    InitLogicController *m_initLogicController;
    BOOL m_bInitOK;
    BOOL m_recoverViewShown;
}

- (id)initFromReg:(BOOL)a0;
- (void)startStep;
- (BOOL)isIniting;
- (BOOL)isInitOK;
- (void)startLoading;
- (void)stopLoading;
- (void)percentIniting:(id)a0;
- (void)handleInitOk;
- (void)stopIniting:(unsigned int)a0;
- (BOOL)showDBRecoverViewIfNeeded;
- (void).cxx_destruct;

@end
