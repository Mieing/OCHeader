@class UIImageView, UIStackView, UIView;

@interface AWEPublishSuccessViewModern : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIStackView *textContainerView;
@property (copy, nonatomic) id /* block */ bindAction;

- (id)initWithAweme:(id)a0 type:(unsigned long long)a1 title:(id)a2;
- (void)setupCoverWithModel:(id)a0;
- (void)setupTextWithModel:(id)a0 type:(unsigned long long)a1 title:(id)a2;
- (void)setupButtonsWithType:(unsigned long long)a0;
- (void)setupContainerView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)actionButtonTapped;

@end
