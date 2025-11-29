@class UIImageView, LOTAnimationView, UILabel, UIView, AWEPlayInteractionCoCreatorNewInfoCellModel;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEPlayInteractionCoCreatorNewInfoCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *defaultImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) LOTAnimationView *followAnimationView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *tagBgView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AWEPlayInteractionCoCreatorNewInfoCellModel *cellModel;
@property (copy, nonatomic) id /* block */ followViewTapped;

- (void)playFollowAnimation:(id /* block */)a0;
- (void)setOutLine:(double)a0;
- (void)updateAvatarImageView:(BOOL)a0;
- (void)followAnimationViewTapped;
- (void)hideOutLine;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithModel:(id)a0;
- (void)configureConstraints;
- (void)configureSubviews;

@end
