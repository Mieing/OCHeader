@class UIImageView, AWEPadFeedDrawerPlayingAnimationView, UILabel, UIView, AWEPadFeedContentModel;

@interface AWEPadFeedContentSheetCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImgView;
@property (retain, nonatomic) UIImageView *playerHolderView;
@property (retain, nonatomic) UIImageView *infoTypeImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) UILabel *likeLabel;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UILabel *subInfoLabel;
@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) UIView *selectedMaskView;
@property (retain, nonatomic) UILabel *selectedLabel;
@property (retain, nonatomic) AWEPadFeedDrawerPlayingAnimationView *selectedIcon;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) AWEPadFeedContentModel *contentModel;

- (void)configWithModel:(id)a0;
- (void)configWithContentModel:(id)a0;
- (BOOL)isLongVideo:(id)a0;
- (id)formateDuration:(id)a0;
- (BOOL)showScore:(id)a0;
- (id)updateCycleString:(id)a0;
- (id)countStrForNum:(id)a0 type:(long long)a1;
- (BOOL)isNotFinishVideoFromRecommend:(id)a0;
- (void)setupTitleLabelWithModel:(id)a0;
- (void)configCellForHighlight:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
