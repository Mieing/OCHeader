@class AWELiveAcqCastLiveStreamContext, UIImageView, AWEAwemeModel, UILabel, AWEGradientView;

@interface AWELiveAcqCastLiveStreamCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELiveAcqCastLiveStreamContext *context;

+ (id)identifier;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__refreshComponents;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
