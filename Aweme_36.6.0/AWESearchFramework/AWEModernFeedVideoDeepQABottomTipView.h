@class AWEVideoDeepQAVideoTipView, AWEGradientView;

@interface AWEModernFeedVideoDeepQABottomTipView : UIView

@property (retain, nonatomic) AWEVideoDeepQAVideoTipView *videoTipView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (copy, nonatomic) id /* block */ clickVideoTipView;
@property (nonatomic) long long selecteIndex;

- (void)updateWithModel:(id)a0 lottiePath:(id)a1 count:(long long)a2 videoSizeType:(unsigned long long)a3;
- (void)videoTipViewTapped;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
