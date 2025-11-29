@class UIImageView, UILabel, UIButton;

@interface MMFinderLiveConcertTicketFailureView : UIView

@property (copy, nonatomic) id /* block */ retryBlock;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *retryButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 retryBlock:(id /* block */)a1;
- (void)layoutSubviews;
- (void)onRetryButtonTapped;
- (void).cxx_destruct;

@end
