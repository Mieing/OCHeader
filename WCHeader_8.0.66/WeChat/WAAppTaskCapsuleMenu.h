@class WAAppTaskCapsuleBannerInfo, NSString, MMUIView, WAAppTaskCapsuleButton, WACapsuleView;
@protocol WACapsuleMenuDelegate;

@interface WAAppTaskCapsuleMenu : MMObject <WACapsuleViewDelegate>

@property (retain, nonatomic) WACapsuleView *capsuleView;
@property (retain, nonatomic) WAAppTaskCapsuleButton *singleCloseButton;
@property (retain, nonatomic) WAAppTaskCapsuleButton *expandButton;
@property (nonatomic) BOOL isGame;
@property (retain, nonatomic) WAAppTaskCapsuleBannerInfo *bannerInfo;
@property (nonatomic) unsigned long long menuType;
@property (weak, nonatomic) id<WACapsuleMenuDelegate> delegate;
@property (nonatomic) long long menuState;
@property (nonatomic) long long menuStyle;
@property (retain, nonatomic) MMUIView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL needAdaptIpad;
@property (nonatomic) BOOL enableDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsGame:(BOOL)a0;
- (id)init;
- (void)initView;
- (void)initMenuView;
- (void)configMenuWithUIParameter:(id)a0;
- (void)showBanner;
- (BOOL)bannerExsist;
- (void)configWeAppSdkBrandTips;
- (void)configThirdBusiTipsText:(id)a0 iconUrl:(id)a1;
- (void)configLowScoreBanner:(BOOL)a0;
- (void)configDishRecommendBanner:(id)a0 iconUrl:(id)a1 darkModeIconUrl:(id)a2;
- (BOOL)configJSAPIBanner:(id)a0 iconImage:(id)a1 iconUrl:(id)a2 darkModeIconUrl:(id)a3 type:(unsigned long long)a4;
- (id)getCapsuleView;
- (double)capsuleWidth;
- (double)capsuleHeight;
- (id)menuTransButton;
- (id)menuMoreButton;
- (id)menuExitButton;
- (id)menuSingleCloseButton;
- (id)menuExpandButton;
- (void)setTouchInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)capsuleViewOnClickTranslate:(id)a0;
- (void)capsuleViewOnClickTranslateDoing:(id)a0;
- (void)capsuleViewOnClickMore:(id)a0;
- (void)capsuleViewOnClickExit:(id)a0;
- (void)capsuleViewOnLongPressMore:(id)a0;
- (void)capsuleViewOnLongPressExit:(id)a0;
- (void)capsuleViewOnClickExpand:(id)a0;
- (void)capsuleViewOnMutationChange:(id)a0 action:(unsigned long long)a1;
- (id)getCurrentWebView;
- (void)menuTypeDidUpdate;
- (void)menuStyleDidUpdate;
- (void)updateSingleCloseButtonBackgroundColor;
- (void)updateExpandButtonBackgroundColor;
- (void)updateCapsuleButtonBackgroundColor:(id)a0 svgName:(id)a1;
- (void)initSingleCloseButton;
- (void)initExpandButton;
- (void)onSingleCloseButton:(id)a0;
- (void)onExpandButton:(id)a0;
- (void)layoutSingleCloseButton;
- (void)layoutExpandButton;
- (void).cxx_destruct;

@end
