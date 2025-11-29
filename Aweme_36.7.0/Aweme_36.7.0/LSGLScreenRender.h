@class NSString;
@protocol LSGLScreenRenderDelegate;

@interface LSGLScreenRender : UIView <LSGLInput>

@property (nonatomic) int subFrameIndex;
@property (nonatomic) int previewFps;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } vertexRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textureRect;
@property (nonatomic) unsigned long long fillMode;
@property (weak, nonatomic) id<LSGLScreenRenderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;

@end
