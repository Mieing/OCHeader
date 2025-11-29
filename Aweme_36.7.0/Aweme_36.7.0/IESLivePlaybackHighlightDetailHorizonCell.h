@class HTSLiveGradientBackgroundView, UIImageView, UIView, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLivePlaybackHighlightDetailHorizonCell : UICollectionViewCell

@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *mainImage;
@property (retain, nonatomic) UIView *dot;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *liveWebp;

+ (id)identifier;

- (id)startLoacationStrOf:(long long)a0;
- (void)p_addWebPIfNeeded;
- (void)updateData:(id)a0 selected:(BOOL)a1 isFirst:(BOOL)a2;
- (void)layoutLastCell;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
