@class NSString;

@interface AFDPushLandingTrackerHelper : NSObject <AFDPushLandingTrackerHelperProtocol>

@property (nonatomic) BOOL isBlockedByEnterBackground;
@property (copy, nonatomic) NSString *gdLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)handleViewWillAppear:(id)a0;
- (void)handleViewWillDisappear:(id)a0;
- (void)__addObserver;
- (void)p_handleTabBarChange:(id)a0;
- (void)p_handleApplicationDidEnterBackground:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
