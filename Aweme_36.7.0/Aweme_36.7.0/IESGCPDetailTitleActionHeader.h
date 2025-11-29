@class NSString, UIImageView, UILabel, MASConstraint;

@interface IESGCPDetailTitleActionHeader : UIView

@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) MASConstraint *contentLeftMargin;
@property (retain, nonatomic) MASConstraint *contentRightMargin;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (copy, nonatomic) NSString *mainTitleText;
@property (copy, nonatomic) NSString *subTitleText;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) double leftRightContentInset;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutView;
- (void)setupView;
- (void)tapAction:(id)a0;

@end
