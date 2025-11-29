@class CAGradientLayer, AWEFeedLiveStreamingView, UIImageView, UIVisualEffectView, UILabel, UIView, AWEAwemeModel;

@interface AWEUserLiveCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *endLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) CAGradientLayer *colorLayer;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) CAGradientLayer *shadowMaskLayer;
@property (nonatomic) BOOL isStreaming;
@property (retain, nonatomic) AWEFeedLiveStreamingView *streamingView;

+ (id)disableIdentifier;
+ (id)identifier;

- (void)resumeLive;
- (void)stopLive;
- (void)startLive;
- (void)setupWithModel:(id)a0 withCoverUrl:(id)a1;
- (void)playAndTrack;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupUI;

@end
