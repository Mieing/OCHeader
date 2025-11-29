@class NSString;

@interface IESLiveCustomImageViewShadowNode : LynxShadowNode <LynxMeasureDelegate>

@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;

- (void)adoptNativeLayoutNode:(long long)a0;
- (struct CGSize { double x0; double x1; })measureNode:(id)a0 withWidth:(double)a1 widthMode:(long long)a2 height:(double)a3 heightMode:(long long)a4;

@end
