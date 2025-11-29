@class NSString, AWEWatchLaterDiversionInfo;

@interface AWEWatchLaterUGManager : NSObject <AWERouterInterceptorDelegate>

@property (retain, nonatomic) AWEWatchLaterDiversionInfo *watchLaterDivisionInfo;
@property (nonatomic) BOOL isLanding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (void)cleanWatchLaterDivisionInfo;
- (void)recordWatchLaterUGHeaderViewShowAction;
- (void)recordWatchLaterUGHeaderViewClickAction;
- (BOOL)isWatchLaterUGHeaderExitIntervel;
- (BOOL)enableWatchLaterUGHeader;
- (void)saveWatchLaterDivisionInfo:(id)a0;
- (void)recordWatchLaterUGLandingAction:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
