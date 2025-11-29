@class NSString, AWEVCDV2AlertModel;

@interface AWEVCDAuthorizeShowAlertManager : NSObject <AWEVCDAuthorizeShowAlertManagerProtocol, AWEAlertProtocol>

@property (retain, nonatomic) AWEVCDV2AlertModel *vcdV2Model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEVCDAuthorizeCommonAdapterClass;
+ (id)sharedInstance;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)hasAuthorizeRelation;
- (id)aAWEMainModuleServiceDOUYINHTSAdaper;
- (void)showAuthorizeAlertOnFeedIfNeeded;
- (BOOL)shouldWaitOtherNotification;
- (BOOL)shouldShowAccountAlertOnFeed;
- (void)showAccountAlertOnFeed;
- (BOOL)shouldShowRelaionAlertOnFeed;
- (void)showRelationAlertOnFeed;
- (id)aAWEVCDAuthorizeCommonAdapter;
- (void).cxx_destruct;
- (BOOL)isShowing;

@end
