@protocol QZoneLoginStatusDelegate;

@interface QZoneLoginStatus : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<QZoneLoginStatusDelegate> m_delegate;

- (id)init;
- (void)dealloc;
- (void)getQZoneLoginStatusUrl:(unsigned long long)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
