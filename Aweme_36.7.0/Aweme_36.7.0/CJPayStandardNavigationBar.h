@class UIColor, NSArray, UIImageView, NSString, UIView, CJPayButton, UILabel;
@protocol CJPayNavigationBarDelegate;

@interface CJPayStandardNavigationBar : UIView <CJPayNavigationBarViewProtocol, CJPayStandardLocalThemeAdapterProtocol>

@property (copy, nonatomic) NSArray *leftActions;
@property (copy, nonatomic) NSArray *rightActions;
@property (nonatomic) double separatorLineHeight;
@property (retain, nonatomic) UIView *statusSpaceView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *leftActionContainerView;
@property (retain, nonatomic) UIView *rightActionContainerView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *lightBGColor;
@property (retain, nonatomic) UIColor *darkBGColor;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) CJPayButton *backBtn;
@property (retain, nonatomic) CJPayButton *shareBtn;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) BOOL isCloseBackImage;
@property (weak, nonatomic) id<CJPayNavigationBarDelegate> delegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefaultStyle;
- (void)hideBottomLine;
- (void)p_share;
- (id)p_backAction;
- (void)p_back;
- (void)removeStatusBarPlaceView;
- (void)setBackBtnImageName:(id)a0;
- (void)setupRightAction:(id)a0;
- (void)setupLeftAction:(id)a0;
- (void)p_removeAllLeftAction;
- (void)p_removeAllRightAction;
- (void)p_setupDefayltStyle;
- (id)p_createBackBtn;
- (id)p_createShareBtn;
- (void)setTitleImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setLeftImage:(id)a0;
- (void)setTitleImage:(id)a0;

@end
