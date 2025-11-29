@class UIImageView, AWEIMFacePuzzleContentProps, UIView, UILabel;

@interface AWEIMFacePuzzleContentView : UIView

@property (retain, nonatomic) AWEIMFacePuzzleContentProps *props;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UILabel *des;
@property (retain, nonatomic) UIView *btn;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_delete;
- (void)p_onTap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
