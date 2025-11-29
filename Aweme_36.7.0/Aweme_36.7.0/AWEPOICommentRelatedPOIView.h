@class UILabel;

@interface AWEPOICommentRelatedPOIView : UIView

@property (retain, nonatomic) UILabel *tipsWordLabel;
@property (retain, nonatomic) UILabel *itemLabel;

- (double)relatedPOIViewHeight;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
