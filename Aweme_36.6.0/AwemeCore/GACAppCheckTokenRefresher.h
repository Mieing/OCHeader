@class NSString, GACAppCheckTokenRefreshResult, NSObject;
@protocol OS_dispatch_queue, GACAppCheckSettingsProtocol, GACAppCheckTimerProtocol;

@interface GACAppCheckTokenRefresher : NSObject <GACAppCheckTokenRefresherProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *refreshQueue;
@property (readonly, nonatomic) id<GACAppCheckSettingsProtocol> settings;
@property (readonly, nonatomic) id /* block */ timerProvider;
@property (retain) id<GACAppCheckTimerProtocol> timer;
@property unsigned long long retryCount;
@property (retain, nonatomic) GACAppCheckTokenRefreshResult *initialRefreshResult;
@property (copy, nonatomic) id /* block */ tokenRefreshHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)backoffTimeForRetryCount:(long long)a0;
+ (double)randomMilliseconds;

- (id)initWithRefreshResult:(id)a0 settings:(id)a1;
- (void)updateWithRefreshResult:(id)a0;
- (id)initWithRefreshResult:(id)a0 timerProvider:(id /* block */)a1 settings:(id)a2;
- (void)scheduleWithTokenRefreshResult:(id)a0;
- (id)nextRefreshDateWithTokenRefreshResult:(id)a0;
- (void)scheduleRefreshAtDate:(id)a0;
- (void).cxx_destruct;
- (void)refresh;
- (void)cancelTimer;
- (void)dealloc;

@end
