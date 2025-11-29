@class HTSLiveGradientBackgroundView, UIImageView, UIView, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLivePlaybackHighlightDetailCell : UITableViewCell

@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *mainImage;
@property (retain, nonatomic) UIView *dot;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *liveWebp;

+ (id)identifier;

- (id)startLoacationStrOf:(long long)a0;
- (void)p_addWebPIfNeeded;
- (void)updateData:(id)a0 selected:(BOOL)a1 isFirst:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setup;

@end
