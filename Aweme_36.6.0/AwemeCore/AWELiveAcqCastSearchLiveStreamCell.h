@class UIImageView, AWEAwemeModel, UIView, UILabel, YYLabel;

@interface AWELiveAcqCastSearchLiveStreamCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *liveTag;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderModel:(id)a0;
- (void)__configComponents;
- (void)__refreshComponents;
- (void)__createLiveTag;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
