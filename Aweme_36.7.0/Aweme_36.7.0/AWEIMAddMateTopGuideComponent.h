@class NSString, NSDictionary, AWEIMCommonTopFloatView, AWEIMCodeGenConversationBannerConfigurationModel;

@interface AWEIMAddMateTopGuideComponent : AWEIMComponentBase <AWEIMAddMateTopGuideInterface, AWEIMMessageListUserInfoAction, AWEIMConversationInfoOtherSubscriberProtocol>

@property (retain, nonatomic) AWEIMCommonTopFloatView *guideView;
@property (nonatomic) BOOL isDisplaying;
@property (retain, nonatomic) AWEIMCodeGenConversationBannerConfigurationModel *bannerModel;
@property (copy, nonatomic) NSDictionary *bannerFrequencyInfo;
@property (nonatomic) BOOL didFecthFullUserDetail;
@property (retain, nonatomic) id observer;
@property (nonatomic) BOOL showInFloatMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)p_observeMateStatus;
- (BOOL)p_shouldShow;
- (void)p_action;
- (void)p_dismissBanner;
- (void)p_createGuideView;
- (void)p_showBanner;
- (void)showBannerViewWithCompletion:(id /* block */)a0;
- (id)p_resolvedExtraParams:(id)a0;
- (id)trackStatusString;
- (void)p_reportShow;
- (void)p_reportAction;
- (void)p_reportClose;
- (void)p_reportWithEnum:(id)a0;
- (void)p_trackWithEvent:(id)a0 extraDict:(id)a1;
- (void)p_tryRegisterBanner;
- (id)resolvedConvBannerConfig;
- (void).cxx_destruct;

@end
