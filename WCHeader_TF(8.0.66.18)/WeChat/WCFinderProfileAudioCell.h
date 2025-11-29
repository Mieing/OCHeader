@class UIView, NSURL, WCFinderAnimationLoadingView, WCFinderStreamProfileHeadData, UIImageView, MMListenItem, UILabel, MMUIButton;

@interface WCFinderProfileAudioCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) NSURL *coverUrl;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIImageView *failIcon;
@property (retain, nonatomic) MMUIButton *starBtn;
@property (retain, nonatomic) UIImageView *playNumIconView;
@property (retain, nonatomic) UILabel *playNumLabel;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) int audioStatus;
@property (retain, nonatomic) WCFinderStreamProfileHeadData *profileHeadData;
@property (retain, nonatomic) MMListenItem *dataItem;
@property (nonatomic) BOOL showBottomLine;
@property (nonatomic) BOOL fullBottomLine;
@property (nonatomic) BOOL fromAudioPage;

+ (double)displayHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCoverUrl:(id)a0;
- (void)updateStatusLabel:(id)a0;
- (void)updateAudioDuration:(long long)a0;
- (void)layoutSubviews;
- (void)_doLayout;
- (void)onClickStar:(id)a0;
- (void).cxx_destruct;

@end
