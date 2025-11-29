@class UIButton, MMUILabel;

@interface TextStatePublishGuideView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *knowButton;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapKnowButton;
- (void).cxx_destruct;

@end
