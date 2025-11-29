@class NSString, CAShapeLayer, UIImageView, UIView, UILabel;

@interface WCFinderPostStateBubbleView : MMUIView <WCFinderDataItemExt, WCFinderPostDataItemExt>

@property (nonatomic) double containerWidth;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long bubbleState;
@property (copy, nonatomic) NSString *localTid;
@property (copy, nonatomic) NSString *sucFeedId;
@property (copy, nonatomic) NSString *sucNonceId;
@property (retain, nonatomic) CAShapeLayer *ovalShapeLayer;
@property (retain, nonatomic) CAShapeLayer *bottomShapeLayer;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) double lastProgress;
@property (nonatomic) BOOL hadEncoding;
@property (retain, nonatomic) UIImageView *sucIconView;
@property (retain, nonatomic) UIImageView *failIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (nonatomic) int reportCommentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerWidth:(double)a1;
- (void)bindLocalTid:(id)a0;
- (void)unregisterExtension;
- (void)setupContainerView;
- (void)setupSucIconView;
- (void)setupFailIconView;
- (void)setupTipsLabel;
- (void)setupProgressCricle:(double)a0 shapeLayerLineWidth:(double)a1;
- (void)updateProgress:(double)a0;
- (void)rebuildProgressCricle:(double)a0 shapeLayerLineWidth:(double)a1;
- (void)animateProgressSize:(double)a0 duration:(double)a1 shapeLayerLineWidth:(double)a2;
- (void)animateShapeLayer:(id)a0 newPathRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 newCornerRadius:(double)a2 duration:(double)a3 shapeLayerLineWidth:(double)a4;
- (void)cancelCurrentAnimation;
- (void)onFinderDataItemPostProgressWithTid:(id)a0 progress:(id)a1;
- (void)onFinderDataItemEncodingProgress:(double)a0;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (void)onFinderDataItemDelete:(id)a0;
- (void).cxx_destruct;

@end
