@class NSObject, UIColor, UIView, LSIMShapeLayerView, LSIMModalPageModel;
@protocol LSIMCommonModalViewControllerDelegate, LSIMCommonModalCustomContentProtocol;

@interface LSIMCommonModalViewController : UIViewController

@property (retain, nonatomic) UIView *closeBgView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *modalContentView;
@property (retain, nonatomic) UIView *customContentView;
@property (retain, nonatomic) LSIMShapeLayerView *shadowView;
@property (retain, nonatomic) LSIMModalPageModel *pageModel;
@property (retain, nonatomic) NSObject<LSIMCommonModalCustomContentProtocol> *content;
@property (nonatomic) BOOL isFirstSetUPModal;
@property (nonatomic) BOOL isBackgroundViewFlex;
@property (nonatomic) BOOL isClosing;
@property (weak, nonatomic) id<LSIMCommonModalViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (nonatomic) BOOL tapBlankToClose;
@property (nonatomic) double topCornerRadius;
@property (nonatomic) double shadowOpacity;

+ (double)topCornerRadius;

- (void)updateModalContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateClose;
- (void)tapToCloseModal:(id)a0;
- (void)closeModalView;
- (void)showPresentAnimation;
- (void)updateBackgroundFlexibleStatus:(BOOL)a0;
- (void)setupModalView;
- (double)topOffsetWithModal:(id)a0;
- (void)drawShadowViewAndTopCornerRadius;
- (id)initWithPageModel:(id)a0 content:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)initData;

@end
