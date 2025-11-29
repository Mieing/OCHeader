@class UIColor, UIView;

@interface AWEGCPAlbumProgressView : UIView

@property (nonatomic) double lastValue;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) double progressValue;
@property (nonatomic) double totalValue;
@property (nonatomic) BOOL needAnimation;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double interval;

- (void)fillWholeProgress;
- (void)clearWholeProgress;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
