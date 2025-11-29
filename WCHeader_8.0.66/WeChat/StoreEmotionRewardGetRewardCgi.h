@class NSString;
@protocol StoreEmotionRewardGetRewardCgiDelegate;

@interface StoreEmotionRewardGetRewardCgi : MMObject <PBMessageObserverDelegate> {
    BOOL m_hasStartRequestOnce;
    NSString *m_pid;
    unsigned int m_eventID;
}

@property (weak, nonatomic) id<StoreEmotionRewardGetRewardCgiDelegate> delegate;

- (id)initWithPid:(id)a0;
- (BOOL)startRequestWithNeedAllData:(BOOL)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callFailedDelegate;
- (void)callFailedDelegateForUnrewardable;
- (void).cxx_destruct;

@end
