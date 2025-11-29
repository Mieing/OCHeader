@class LOTAnimationView, UILabel, YYLabel;

@interface AWEVideoDeepQAVideoTipView : UIView

@property (retain, nonatomic) LOTAnimationView *playingIconView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) YYLabel *textLabel;
@property (nonatomic) double timeLableWidth;
@property (nonatomic) BOOL hasArriveFirstSection;
@property (retain, nonatomic) YYLabel *tokenLabel;
@property (nonatomic) double textLabelWidth;
@property (nonatomic) double tockenWidth;
@property (nonatomic) unsigned long long videoSizeType;

- (void)configUI;
- (void)updateWithModel:(id)a0 lottiePath:(id)a1 count:(long long)a2 videoSizeType:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
