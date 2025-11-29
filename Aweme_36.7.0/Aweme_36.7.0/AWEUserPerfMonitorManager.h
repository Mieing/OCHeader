@class AWEUserPerfProcessModel, AWEUserPerfLoginModel, AWEUserPerfFinishModel, AWEUserPerfShowModel;

@interface AWEUserPerfMonitorManager : NSObject

@property (retain, nonatomic) AWEUserPerfShowModel *showModel;
@property (retain, nonatomic) AWEUserPerfProcessModel *processModel;
@property (retain, nonatomic) AWEUserPerfFinishModel *finishModel;
@property (retain, nonatomic) AWEUserPerfLoginModel *loginModel;

+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (id)sharedManager;

- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (void)recordSDKIsProcess:(BOOL)a0;
- (void)recordProfileSelfDuration:(long long)a0;
- (double)durationMS:(double)a0;
- (void)recordLoginShowTimeStamp:(unsigned long long)a0;
- (void)recordCarrierDataIsCache:(BOOL)a0;
- (void)recordCarrierTokenIsCache:(BOOL)a0;
- (void)recordTrustRequestIsTimeout:(BOOL)a0;
- (void)recordTrustPrerequisitesSatisfy:(BOOL)a0;
- (void)recordTrustDataIsCache:(BOOL)a0;
- (void)recordLoginProcessTimeStamp:(unsigned long long)a0;
- (void)trackSuccessOrFinishEventWithParams:(id)a0 platform:(unsigned long long)a1 addtionalTrackerInformation:(id)a2 error:(id)a3;
- (id)currentLoginType;
- (void)recordLoginType:(id)a0 eventType:(unsigned long long)a1;
- (void)recordLoginRequestTimeStamp:(unsigned long long)a0;
- (void)recordNoVerifyStatus:(BOOL)a0;
- (void)trackPerfShowWithLoginType:(id)a0 loginPlatform:(unsigned long long)a1 showPlatforms:(id)a2 viewModel:(id)a3;
- (void)recordGroupComplexLoginDuration:(long long)a0;
- (void)recordPreviousShowLoginTypeForShowEvent:(id)a0;
- (void)recordLastShowEventForFinishEvent:(double)a0 showDuration:(double)a1;
- (void)recordGroupJumpToAuthDuration:(long long)a0;
- (void)recordGroupJumpToAuthParams:(id)a0;
- (void)recordGroupShareLoginDuration:(long long)a0;
- (void)recordSecondProcessErrorCode:(long long)a0;
- (void).cxx_destruct;

@end
