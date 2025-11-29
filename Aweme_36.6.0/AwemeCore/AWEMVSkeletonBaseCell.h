@class UILabel, AWEAwemeModel, UIView;

@interface AWEMVSkeletonBaseCell : UICollectionViewCell

@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *descLine2Label;
@property (retain, nonatomic) UIView *authorView;
@property (retain, nonatomic) UILabel *descLine3Label;
@property (retain, nonatomic) UIView *authorAvatarView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *authorRightLabel;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void)configWithAwemeModel:(id)a0;
- (void)updateAuthorView:(double)a0;
- (double)authorViewLabelHeight;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
