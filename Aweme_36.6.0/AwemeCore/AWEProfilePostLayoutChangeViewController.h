@class DUXRadioboxGroup, DUXRadioBox, UIImageView, DUXButton, UIView, UILabel, AWEProfilePostLayoutMaskView;
@protocol AWEUserProfileLayoutPreviewViewProtocol;

@interface AWEProfilePostLayoutChangeViewController : UIViewController

@property (retain, nonatomic) AWEProfilePostLayoutMaskView *contentView;
@property (retain, nonatomic) UIImageView *dyLogoView;
@property (retain, nonatomic) UIView *dyLogoBgView;
@property (retain, nonatomic) UIView *topTipOneView;
@property (retain, nonatomic) UIView *topTipTwoView;
@property (retain, nonatomic) UILabel *postLabel;
@property (retain, nonatomic) UIView<AWEUserProfileLayoutPreviewViewProtocol> *previewView;
@property (retain, nonatomic) UILabel *bottomTipLabel;
@property (retain, nonatomic) UIView *columnCheckView;
@property (retain, nonatomic) DUXRadioboxGroup *configCheckGroup;
@property (retain, nonatomic) DUXRadioBox *tricolumnRadioBox;
@property (retain, nonatomic) UILabel *tricolumnLabel;
@property (retain, nonatomic) DUXRadioBox *dualcolumnRadioBox;
@property (retain, nonatomic) UILabel *dualcolumnLabel;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) UILabel *confirmTipLabel;
@property (nonatomic) BOOL useWaterfallLayout;
@property (nonatomic) BOOL originUseWaterfallLayout;
@property (nonatomic) long long originPostSerialStyle;
@property (nonatomic) BOOL useHasChangeColumns;
@property (nonatomic) BOOL forceShowTwoColumnByDefault;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)awe_themeReload;
- (void)loadProfileData;
- (void)updateViewColor;
- (void)backButtonClickAction:(id)a0;
- (void)quitViewController;
- (void)columnSwitchAction:(id)a0;
- (void)trackLayoutSwitch:(BOOL)a0;
- (id)lableWithText:(id)a0 fontSize:(double)a1 color:(id)a2;
- (void)onColumnLabelTap:(id)a0;
- (void)setStyle:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;
- (void)confirmAction;
- (id)tipView;

@end
