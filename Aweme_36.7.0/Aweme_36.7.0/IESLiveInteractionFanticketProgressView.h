@class IESLiveGradientView;

@interface IESLiveInteractionFanticketProgressView : UIView

@property (retain, nonatomic) IESLiveGradientView *progressBar;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isInGrowAnimation;
@property (nonatomic) BOOL needUpdateProgress;

- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (void)updateProgress:(double)a0;

@end
