@class UILabel, NSString, UIImageView;

@interface IESLongPressAdFeedbackSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *titleString;
@property (retain, nonatomic) UIImageView *startImageView;

- (void).cxx_destruct;
- (void)setIconImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
