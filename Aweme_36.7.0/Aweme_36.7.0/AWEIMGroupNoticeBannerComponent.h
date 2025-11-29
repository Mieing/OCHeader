@class NSString, RxPromise, AWEIMCollapsibleBannerViewModel;

@interface AWEIMGroupNoticeBannerComponent : AWEIMCollapsibleBannerBaseComponent <AWEIMCollapsibleBannerViewModelDelegate>

@property (retain, nonatomic) RxPromise *checkLastDisplayedGroupNoticeTimePromise;
@property (nonatomic) double lastDisplayedGroupNoticeEditTime;
@property (nonatomic) double displayingGroupNoticeEditTime;
@property (retain, nonatomic) AWEIMCollapsibleBannerViewModel *banner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)didDisplayBannerOnCollapsedModeWithViewModel:(id)a0;
- (void)didDisplayBannerOnExpandedModeWithViewModel:(id)a0;
- (void)didSelectBannerWithViewModel:(id)a0;
- (void)__showBannerWithGroupNoticeDict:(id)a0;
- (void)__didDisplayedBanner:(id)a0;
- (void).cxx_destruct;

@end
