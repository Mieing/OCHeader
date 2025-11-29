@class UIView;

@interface ACCRecordLayoutGuideV2 : NSObject

@property (weak, nonatomic) UIView *containerView;

+ (double)getCameraViewScaleLimit115;
+ (double)getCameraViewScale;

- (double)recordButtonViewHeight;
- (double)recordButtonLeftControlIconViewHeight;
- (double)recordButtonRightControlIconViewHeight;
- (double)recordButtonControlAreaSpace;
- (double)recordButtonControlAreaMargin;
- (double)recordButtonCenterYOffset;
- (void).cxx_destruct;
- (double)containerHeight;
- (double)containerWidth;

@end
