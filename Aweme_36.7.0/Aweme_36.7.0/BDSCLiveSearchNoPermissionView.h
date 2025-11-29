@class UIButton, NSString, UIView, BDSCSearchTipView;

@interface BDSCLiveSearchNoPermissionView : UIView <BDSCSearchDeviceNoPermissionViewProtocol>

@property (retain, nonatomic) BDSCSearchTipView *tipView;
@property (retain, nonatomic) UIView *tipContainer;
@property (retain, nonatomic) UIButton *settingsButton;
@property (nonatomic) BOOL isLandscapeStream;
@property (nonatomic) double verticalTipViewHeight;
@property (nonatomic) double verticalContainerBottomOffset;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localConfig;
- (id)btnBackgroundColor;
- (id)btnTitleColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isLandscape:(BOOL)a1 isLandscapeStream:(BOOL)a2;
- (void)settingButtonClicked:(id)a0;
- (BOOL)optimizeSearchAbnormalNewStyle;
- (double)btnWidth;
- (double)btnHeight;
- (double)btnTopMargin;
- (BOOL)isCenterLayout;
- (void)openSystemSettings;
- (void)didTapTipView;
- (double)btnBackgroundColorAlpha;
- (double)btnTitleFontSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)updateUI;

@end
