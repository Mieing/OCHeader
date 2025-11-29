@class NSString, NSMutableSet, IESLiveGameOpenPlatformMessageProxy, IESLiveAnchorAudienceInteractiveGameModel;

@interface IESLiveGameOpenPlatformMessageAdaptor : NSObject <IESLiveGameOpenPlatformMessageAdaptor>

@property (retain, nonatomic) NSMutableSet *eventInvocationAllowList;
@property (nonatomic) BOOL isSubscribingSpecifiedContentComment;
@property (nonatomic) BOOL isSubscribingSpecifiedUserComment;
@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, nonatomic) BOOL isAnchor;
@property (readonly, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;
@property (readonly, nonatomic) IESLiveGameOpenPlatformMessageProxy *messageProxy;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id)_commonRegisterMethods;
- (id)_xplayGameRegisterMethods;
- (void)_updateCommentSubscriptionStateWithContent:(BOOL)a0 user:(BOOL)a1;
- (void)enableInvocation:(id)a0;
- (void)disableInvocation:(id)a0;
- (void)didReceiveEvent:(id)a0 params:(id)a1;
- (id)initWithAppId:(id)a0 gameModel:(id)a1 isAnchor:(BOOL)a2 diContext:(id)a3;
- (BOOL)isAllowedInvocation:(id)a0;
- (id)anchorRegisterMethods;
- (id)audienceRegisterMethods;
- (void)changeInvocationAllowStatusIfNeededWithSuccess:(BOOL)a0 event:(id)a1;
- (void)trackApiExecute:(id)a0;
- (void).cxx_destruct;

@end
