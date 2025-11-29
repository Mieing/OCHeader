@class NSString;

@interface OpenglRenderView : UIView <VoipOpenglesContextDelegate>

@property (nonatomic) struct CGSize { double width; double height; } dataContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)renderView;
- (void)updateViewFrameWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateViewFrame;

@end
