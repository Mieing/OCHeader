@class NSString;

@interface AFDRecommendPanelManager : NSObject <AFDRecommendPanelManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createQuickReplyControllerWithParam:(id)a0;
+ (void)updateFriendRecommendTagAfterRecommendPanelRefreshWithModel:(id)a0;
+ (BOOL)isRecommendPanelNewStyleEnable;
+ (void)showRecommendPanelWithContext:(id)a0 delegate:(id)a1;
+ (id)recommendListTitleConfig;


@end
