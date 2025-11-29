@class IESLiveLightingRecordProgressView, IESLiveGCDTimer, UIView;

@interface IESLiveLightingRecordButton : UIView

@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *whiteView;
@property (retain, nonatomic) UIView *redView;
@property (retain, nonatomic) IESLiveLightingRecordProgressView *progressView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double progress;

- (void)startAnimateWithDuration:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)setupSubviews;

@end
