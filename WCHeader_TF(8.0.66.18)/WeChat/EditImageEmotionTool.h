@class NSString, UIImageView;

@interface EditImageEmotionTool : EditImageWidgetTool {
    double _imgWidth;
    double _imgHeight;
    UIImageView *_imageView;
    double _zoomScaleWhenInit;
}

@property (retain, nonatomic) NSString *emotionMd5;
@property (retain, nonatomic) NSString *emotionSearchKey;
@property (nonatomic) BOOL animatable;

+ (id)generateWidgetFromState:(id)a0;

- (void)didSelectEmotion:(id)a0 withCenterPoint:(struct CGPoint { double x0; double x1; })a1 md5:(id)a2;
- (void)_removeAnimateFromImageView;
- (void)_genAnimateForImageView;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (BOOL)startEditingText;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)freezeWidget;
- (void)reviveWidget;
- (void)seekWidgetToTimeSec:(double)a0;
- (void)resetWidget;
- (id)exportAnimatedLayer;
- (id)exportWidgetStateForEditorFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 assetPreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
