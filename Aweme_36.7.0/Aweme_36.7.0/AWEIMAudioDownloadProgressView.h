@class UIImageView, AWEIMCircleProgressView, UIColor;
@protocol AWEIMAudioDownloadProgressViewDelegate;

@interface AWEIMAudioDownloadProgressView : UIView

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEIMCircleProgressView *progressView;
@property (retain, nonatomic) UIColor *bubbleIconColor;
@property (nonatomic) BOOL useSvgIcon;
@property (weak, nonatomic) id<AWEIMAudioDownloadProgressViewDelegate> delegate;

- (void)configBubbleIconColor:(id)a0;
- (void)configWithMessageState:(unsigned long long)a0 sendFromMe:(BOOL)a1 isQuoteStyle:(BOOL)a2;
- (void)configProgressColor:(id)a0;
- (void)configDownloadProgress:(double)a0;
- (void)configBackgroudProgressColor:(id)a0;
- (void)updateWithSendFromMe:(BOOL)a0 hasChatBackground:(BOOL)a1 isQuoteStyle:(BOOL)a2;
- (BOOL)needEnlargeMessageUI;
- (void)p_createProgressViewIfNeeded;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
