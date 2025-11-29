@class UILongPressGestureRecognizer, MMUIActivityIndicatorView, UIImageView, UIView, MMUILabel;
@protocol VoicePrintRecordButtonDelegate;

@interface VoicePrintRecordButton : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (weak, nonatomic) id<VoicePrintRecordButtonDelegate> delegate;
@property (nonatomic) unsigned int state;
@property (nonatomic) double volume;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initGesture;
- (void)initSubviews;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)startRecordAnimation;
- (void)stopRecordAnimation;
- (void)handleLongPressGesture:(id)a0;
- (void).cxx_destruct;

@end
