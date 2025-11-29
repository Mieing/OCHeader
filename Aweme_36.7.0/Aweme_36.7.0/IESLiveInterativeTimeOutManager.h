@class IESLiveCountTimer, IESLiveInterativeTimeOutConfig, NSMutableDictionary;
@protocol IESLiveInterativeTimeOutDelegate;

@interface IESLiveInterativeTimeOutManager : NSObject

@property (retain, nonatomic) IESLiveInterativeTimeOutConfig *config;
@property (retain, nonatomic) IESLiveCountTimer *timeoutTimer;
@property (retain, nonatomic) NSMutableDictionary *uidToCountDown;
@property (weak, nonatomic) id<IESLiveInterativeTimeOutDelegate> delegate;

- (BOOL)containWithKey:(id)a0 onInvite:(BOOL)a1;
- (void)addTimeoutWithKey:(id)a0 onInvite:(BOOL)a1;
- (void)removeTimerWithKey:(id)a0;
- (void)timeOutWithUid:(id)a0 onInvite:(BOOL)a1;
- (void)startInviteTimer;
- (void)removeTimerWithKeys:(id)a0;
- (id)itemWithKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
