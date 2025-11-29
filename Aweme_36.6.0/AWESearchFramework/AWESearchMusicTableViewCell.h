@class UIScrollView, UIImageView, UIView, UILabel, UIButton;

@interface AWESearchMusicTableViewCell : AWEUIListTableViewCell

@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIImageView *rankingView;
@property (retain, nonatomic) UIView *musicTagContentView;
@property (copy, nonatomic) id /* block */ playButtonTapBlock;
@property (nonatomic) BOOL shouldShowTopTagImage;
@property (nonatomic) BOOL shouldShowActionButton;
@property (nonatomic) BOOL needContentViewClearColor;
@property (nonatomic) BOOL disableHighlight;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIScrollView *tagContentView;
@property (retain, nonatomic) UIView *panGestureView;

+ (double)cellHeightWithModel:(id)a0;
+ (long long)cellType;
+ (id)identifier;
+ (double)cellHeight;

- (void)configureUI;
- (id)initWithCellType:(long long)a0 cellStyle:(long long)a1 reuseIdentifier:(id)a2;
- (id)timeString:(double)a0;
- (void)p_startAnimation;
- (void)configWithPlayerStatus:(unsigned long long)a0;
- (id)musicTagLabelWithTitle:(id)a0 titleColor:(id)a1 backgroundColor:(id)a2 borderColor:(id)a3;
- (id)colorFromARGBHexString:(id)a0 defaultColor:(id)a1;
- (void)p_stopAnimation;
- (void)configLeftTextWithModel:(id)a0;
- (id)colorFromHexString:(id)a0;
- (void)layoutMusicTagContentView:(id)a0;
- (id)musicCardFormat:(long long)a0;
- (id)imageWithUIView:(id)a0;
- (void)setupTagContentView;
- (id)musicTagWithTitle:(id)a0 titleColor:(id)a1 tagColor:(id)a2;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)configureWithModel:(id)a0;
- (void)playButtonTapped;

@end
