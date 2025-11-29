@class MMWebImageView, UILabel, UIView;

@interface GCVerticalImgLabelView : UIView

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) MMWebImageView *imgView;
@property (retain, nonatomic) UILabel *label;

- (id)initWithTopViewWidth:(double)a0 imgWidth:(double)a1 imgLabelSpace:(double)a2 labelLayout:(id)a3 additionLabelSpace:(double)a4;
- (void).cxx_destruct;

@end
