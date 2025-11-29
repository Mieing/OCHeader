@class AWEPOIFeedUgcQAEntranceInfoModel, UIImageView, CAShapeLayer, UILabel, NSTimer, AWEPOIDetailConstData;

@interface AWEPOIDetailFeedUgcQaFloatingView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } bottomRightPoint;
@property (retain, nonatomic) AWEPOIFeedUgcQAEntranceInfoModel *qaInfo;
@property (nonatomic) long long state;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *shortPromptLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) NSTimer *shrinkShowTimer;
@property (nonatomic) unsigned long long shrinkRecord;
@property (retain, nonatomic) AWEPOIDetailConstData *constData;

+ (struct CGSize { double x0; double x1; })normalSizeWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })simpleSizeWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })guidedSizeWithModel:(id)a0;
+ (double)maxWidth;
+ (double)viewHeight;

- (id)trackingParams;
- (void)removeAnimations;
- (void)cleanShrinkShowTimer;
- (void)shortAnimationWithData:(id)a0;
- (void)updateFrameWithState:(long long)a0;
- (void)createShrinkShowTimerWithData:(id)a0;
- (void)drawShapeMaskLayer;
- (void)qaViewDidTapped;
- (void)shortAnimationWithTimer:(id)a0;
- (id)initWithBottomRightPoint:(struct CGPoint { double x0; double x1; })a0 qaInfo:(id)a1;
- (void)showWithState:(long long)a0;
- (void)updateBottomRightPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasRecordShrinkAfterShortPrompt;
- (void)recordShrinkAfterShortPrompt;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
