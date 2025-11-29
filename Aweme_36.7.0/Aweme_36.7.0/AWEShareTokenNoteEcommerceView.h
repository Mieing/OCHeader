@class UIView;

@interface AWEShareTokenNoteEcommerceView : AWEShareTokenNoteBaseCardView

@property (retain, nonatomic) UIView *ecommerceContainerView;
@property (nonatomic) double firstInitTime;

- (void)setupUIWithModel:(id)a0;
- (void)dismissButtonTapped;
- (void)goToEcommerce;
- (void)actionButtonClick;
- (void)mainImageClick;
- (void)viewDidShow;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
