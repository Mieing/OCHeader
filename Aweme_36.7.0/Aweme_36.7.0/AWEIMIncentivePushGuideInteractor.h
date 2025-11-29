@class AWEIMIncentivePushGuideView, NSString;
@protocol AWEIMPushGuideBannerViewDelegate;

@interface AWEIMIncentivePushGuideInteractor : NSObject <AWEIMIncentiveChatPushGuideInteractorProtocol>

@property (retain, nonatomic) AWEIMIncentivePushGuideView *bannerView;
@property (weak, nonatomic) id<AWEIMPushGuideBannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)willEnterConversation;
+ (BOOL)canCreateIncentivePushBanner;
+ (id)settingConfigDict;
+ (void)p_finishIncentivePushTask;

- (void)updateWithChatHasBackground:(BOOL)a0;
- (void)p_onClickBannerView;
- (void)p_didBecomeActive;
- (id)createIncentivePushBannerView;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (BOOL)isDisplaying;

@end
