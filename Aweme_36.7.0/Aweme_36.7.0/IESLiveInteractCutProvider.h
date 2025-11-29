@class IESLiveBgRenderEngine, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveInteractCutProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderSerialQueue;
@property (retain, nonatomic) IESLiveBgRenderEngine *metalEngine;

+ (id)convertSlots:(id)a0 toOrigin:(struct CGPoint { double x0; double x1; })a1;
+ (BOOL)twoSlotsArrayIsEqualSlotsA:(id)a0 slotsB:(id)a1;
+ (long long)compareFloatA:(double)a0 floatB:(double)a1;
+ (id)convertTextureToImage:(id)a0;
+ (id)sortSlots:(id)a0;

- (struct CGPath { } *)getMaskLayerPathWithCutSlots:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1 radius:(double)a2;
- (struct CGPath { } *)getMaskLayerPathWithCutSlots:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
- (void)metalCutImageStaticBg:(id)a0 cutSlots:(id)a1 inSize:(struct CGSize { double x0; double x1; })a2 radius:(double)a3 startBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)metalCutImageStaticBg:(id)a0 cutSlots:(id)a1 inSize:(struct CGSize { double x0; double x1; })a2 startBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)asyncCutImageStaticBg:(id)a0 cutSlots:(id)a1 inSize:(struct CGSize { double x0; double x1; })a2 startBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (id)pathContainCutSlots:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })asyncAspectFillFrameForImage:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
- (id)pathContainCutSlots:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1 radius:(double)a2;
- (id)p_pathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)p_roundedPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(double)a1;
- (id)getMaskLayerWithCutSlots:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
