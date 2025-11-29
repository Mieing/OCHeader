@class AWELiveSoloKTVDetailHeaderInfoDiffableModel, UIView, AWECollectionButton, UIButton;

@interface AWELiveSoloKTVDetailHeaderInfoCell : UICollectionViewCell

@property (retain, nonatomic) UIView *coverContainer;
@property (retain, nonatomic) UIView *songInfoContainer;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) AWECollectionButton *collectButton;
@property (retain, nonatomic) AWELiveSoloKTVDetailHeaderInfoDiffableModel *model;

- (void)configWithModel:(id)a0;
- (void)bindViewModel;
- (void)didClickPlayButton;
- (void)setupBaseUI;
- (void)updateInfoView;
- (void)clearInfoViewIfNeed;
- (unsigned long long)getSongRealDuration:(id)a0;
- (id)createDurationLabelWithText:(id)a0;
- (void)didClickCollectButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
