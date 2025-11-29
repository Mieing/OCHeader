@class NSDate, NSString, MMWebImageView, UIView, AppOpenSDKAppBrandMessageViewModel, WCTagsView, UIImageView, MMUILabel, UILabel;

@interface AppOpenSDKAppBrandMessageCellView : CommonMessageCellView <MMWebImageViewDelegate> {
    UIImageView *m_thumbImageView;
    UIImageView *m_defaultLogo;
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
    UIView *m_appBrandSourceView;
}

@property (retain, nonatomic) MMWebImageView *appLogoView;
@property (retain, nonatomic) MMUILabel *appNameLabel;
@property (retain, nonatomic) WCTagsView *tagsView;
@property (retain, nonatomic) NSDate *visibleDate;
@property (readonly, nonatomic) AppOpenSDKAppBrandMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)preloadWeApp;
- (void)willMoveToWindow:(id)a0;
- (void)initHeaderView;
- (void)initTagsView;
- (void)addTitleLabel;
- (void)addDescLabel;
- (void)addThumbImageView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)updateThumbImage;
- (void)onLoadImageOK:(id)a0;
- (id)scaleFixOriginThumbImage:(id)a0;
- (void).cxx_destruct;

@end
