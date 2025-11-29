@class NSString, UIImageView;

@interface EditImageAnimatedEmoticonTool : EditImageAnimatedWidgetTool {
    UIImageView *m_imageView;
}

@property (nonatomic) double imageScale;
@property (readonly, nonatomic) NSString *emoticonMd5;

- (void)didSelectEmoticonMd5:(id)a0;
- (void)resetToFirstFrame;
- (id)exportAnimatedLayerWithTimingObject:(id)a0;
- (BOOL)startEditingText;
- (double)widgetWidth;
- (double)widgetHeight;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
