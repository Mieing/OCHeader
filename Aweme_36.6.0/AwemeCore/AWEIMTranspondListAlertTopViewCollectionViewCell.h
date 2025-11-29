@class UIImageView, AWEIMShareModel;

@interface AWEIMTranspondListAlertTopViewCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEIMShareModel *shareModel;
@property (retain, nonatomic) UIImageView *verifiedLogoView;

+ (id)identifier;

- (void)p_refreshUI;
- (void)configWithShareModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
