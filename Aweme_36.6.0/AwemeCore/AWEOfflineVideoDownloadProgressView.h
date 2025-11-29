@class UIColor, UIView;

@interface AWEOfflineVideoDownloadProgressView : UIView

@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIColor *downloadingColor;
@property (retain, nonatomic) UIColor *pausedColor;
@property (nonatomic) BOOL isPauseStyle;
@property (nonatomic) double progressPercent;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)setupView;

@end
