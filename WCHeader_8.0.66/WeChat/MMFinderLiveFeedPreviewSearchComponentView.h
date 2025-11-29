@class UIImageView, UILabel;

@interface MMFinderLiveFeedPreviewSearchComponentView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrowView;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithInfo:(id)a0;
- (void).cxx_destruct;

@end
