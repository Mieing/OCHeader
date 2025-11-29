@class NSString;
@protocol StoreEmotionRewardAskForRewardCgiDelegate;

@interface StoreEmotionRewardAskForRewardCgi : MMObject <PBMessageObserverDelegate> {
    BOOL m_hasStartRequestOnce;
    NSString *m_pid;
    unsigned int m_eventID;
}

@property (weak, nonatomic) id<StoreEmotionRewardAskForRewardCgiDelegate> delegate;

- (id)initWithPid:(id)a0;
- (BOOL)startRequestWithPrice:(id)a0 scene:(unsigned int)a1 enterScene:(unsigned int)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callFailedDelegate;
- (void)callFailedDelegateWithTips:(id)a0;
- (void)showErrorTipsWithWording:(id)a0;
- (void).cxx_destruct;

@end
