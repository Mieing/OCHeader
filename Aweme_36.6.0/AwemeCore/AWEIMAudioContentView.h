@class NSString, AWEIMShapeView, UITapGestureRecognizer, CALayer, AWEIMAudioDownloadProgressView, AWEIMMessage, AWEIMAudioMessageViewModel, CAGradientLayer, UIPanGestureRecognizer, UILabel;

@interface AWEIMAudioContentView : UIView <UIGestureRecognizerDelegate, AWEIMAudioDownloadProgressViewDelegate>

@property (nonatomic) BOOL isQuoteReplyStyle;
@property (retain, nonatomic) AWEIMAudioDownloadProgressView *playStatusView;
@property (retain, nonatomic) CAGradientLayer *cursorLayer;
@property (retain, nonatomic) AWEIMShapeView *backPathView;
@property (retain, nonatomic) AWEIMShapeView *forePathView;
@property (retain, nonatomic) CALayer *foreMaskLayer;
@property (retain, nonatomic) CALayer *backMaskLayer;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIPanGestureRecognizer *audioPanGes;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) double duration;
@property (retain, nonatomic) AWEIMAudioMessageViewModel *cellViewModel;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (copy, nonatomic) id /* block */ bubbleTappedBlock;
@property (copy, nonatomic) id /* block */ panGestureStateChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeTextFromTimes:(double)a0;
+ (struct CGSize { double x0; double x1; })sizeWithMessage:(id)a0 isQuoteReplyStyle:(BOOL)a1;

- (void)bubbleViewTapped:(id)a0;
- (void)panBubbleView:(id)a0;
- (void)setupBind;
- (void)p_setupViews;
- (id)accessibilityLabelWithStat:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isQuoteReplyStyle:(BOOL)a1;
- (void)configWithMessage:(id)a0 viewModel:(id)a1;
- (double)getPlayStatusViewWidth;
- (double)getPlayStatusViewAndPathViewPadding;
- (double)getTimeLabelHeight;
- (double)getPathViewAndTimeLabelPadding;
- (void)p_refreshUIWithMessage:(id)a0;
- (void)p_refreshAudioUI;
- (void)p_configAudioPlayStatus;
- (BOOL)needEnlargeContentView;
- (BOOL)useSendFromMeStyle;
- (double)getBubbleViewH;
- (void)p_refreshPlayAudioWithCurrentTime:(double)a0;
- (void)p_KVODownloadingState;
- (double)getPathLineWidth;
- (double)getTimeLabelFontSize;
- (BOOL)audioDownloadProgressViewAskForNeedEnlarge:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (id)audioMessage;

@end
