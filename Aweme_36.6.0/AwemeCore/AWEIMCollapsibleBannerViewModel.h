@class UIColor, NSString, NSDictionary, NSNumber;
@protocol AWEIMCollapsibleBannerViewModelDelegate, IESIMCollapsibleBannerComponentProtocol;

@interface AWEIMCollapsibleBannerViewModel : IESIMMultiTopFloatingTipsBaseViewModel <IESIMCollapsibleBannerViewModelProtocol>

@property (weak, nonatomic) id<AWEIMCollapsibleBannerViewModelDelegate, IESIMCollapsibleBannerComponentProtocol> delegate;
@property (copy) NSString *identifier;
@property long long floatingViewPriority;
@property (copy) NSNumber *subPriority;
@property (copy) NSString *iconName;
@property BOOL isDuxIcon;
@property (retain) UIColor *duxIconColor;
@property (copy) NSString *title;
@property long long tailType;
@property BOOL shouldShowBorder;
@property BOOL shouldShowShadow;
@property BOOL shouldDisableRemoveBtnTemporarily;
@property BOOL isDisplayingBannerOnExpandedMode;
@property BOOL isDisplayingBannerOnCollapsedMode;
@property BOOL hasDisplayed;
@property double containerWith;
@property (copy) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAttemptRemoveBanner;
- (void)didConfirmRemoveBanner;
- (void)resetStatusForDisplay;
- (void)didDisplayBannerOnExpandedMode;
- (void)didDisplayBannerOnCollapsedMode;
- (void)didSelectBanner;
- (void)asyncUpdateExtraBySettingObject:(id)a0 ForKey:(id)a1;
- (void)asyncGetObjectForKey:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
