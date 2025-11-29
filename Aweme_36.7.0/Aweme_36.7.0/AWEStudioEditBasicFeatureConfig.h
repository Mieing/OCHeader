@class AWEStudioEditCanvasGestureConfig, NSNumber, UIColor;

@interface AWEStudioEditBasicFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (nonatomic) BOOL swipeUpToShowPreviewEnabled;
@property (retain, nonatomic) AWEStudioEditCanvasGestureConfig *canvasGestureConfig;
@property (copy, nonatomic) NSNumber *bottomPreviewDefaultHidden;
@property (retain, nonatomic) UIColor *previewCoverViewBGColor;
@property (nonatomic) BOOL coverViewSizeEqualToMediaSize;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
