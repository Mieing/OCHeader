@class NSString;

@interface AWEStudioQuickStoryServiceImpl : NSObject <AWEStudioQuickStoryServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeMusicStoryBackgroundImageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isPGC:(BOOL)a2 disableChangeBackground:(BOOL)a3;
- (void)getStoryGradientBackgroundTopColor:(id *)a0 bottomColor:(id *)a1 fromImage:(id)a2;
- (id)p_getDoiminantColorOfImage:(id)a0 topLeftPoint:(struct CGPoint { double x0; double x1; })a1 bottomRightPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)limitedGradientBackgroundTopColor:(id *)a0 bottomColor:(id *)a1 fromImage:(id)a2;
- (id)awe_storyShootGuideWithDismissBlock:(id /* block */)a0 afterDismissBlock:(id /* block */)a1;

@end
