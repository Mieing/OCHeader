@class UIButton, UILabel;

@interface AWERelateRecommendNewBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) BOOL hasShowed;

- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)confirmAction:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)cancelAction:(id)a0;

@end
