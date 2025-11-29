@protocol GetSafetyInfoLogicDelegate;

@interface GetSafetyInfoLogic : MMObject <PBMessageObserverDelegate> {
    BOOL m_bRunning;
}

@property (weak, nonatomic) id<GetSafetyInfoLogicDelegate> delegate;
@property (nonatomic) unsigned int m_uiHasVoice;
@property (nonatomic) unsigned int m_uiOpenVoice;
@property (nonatomic) unsigned int m_uiHasFace;
@property (nonatomic) unsigned int m_uiOpenFace;
@property (nonatomic) unsigned int m_uiHasWxPwd;

- (void)dealloc;
- (void)startGetSafetyInfo;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
