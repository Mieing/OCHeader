@class UILabel, UIImageView, AWEFansListFansCountWrapperModel;

@interface AWEFansListFansCountCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *infoIcon;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) AWEFansListFansCountWrapperModel *wrapperModel;
@property (nonatomic) long long fansCount;

- (void)configModel:(id)a0;
- (id)followerCountString:(long long)a0;
- (void)configWithFollowerCount:(long long)a0;
- (id)createBodyView;
- (void)trackFansPanelWithAction:(id)a0;
- (void)didClickInfoIcon;
- (void)didClickReasonLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
