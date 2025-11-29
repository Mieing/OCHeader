@class UIImageView, UILabel, AWEPOICOIItemFeedbackModel;

@interface AWEPOIDetailNGCOIListFeedbackItemView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWEPOICOIItemFeedbackModel *model;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tap;

@end
