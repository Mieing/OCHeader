@class NSArray, NSString;

@interface YYSpriteSheetImage : UIImage <YYAnimatedImage>

@property (readonly, nonatomic) NSArray *contentRects;
@property (readonly, nonatomic) NSArray *frameDurations;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)animatedImageFrameCount;
- (double)animatedImageDurationAtIndex:(unsigned long long)a0;
- (id)animatedImageFrameAtIndex:(unsigned long long)a0;
- (unsigned long long)animatedImageLoopCount;
- (unsigned long long)animatedImageBytesPerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })animatedImageContentsRectAtIndex:(unsigned long long)a0;
- (id)initWithSpriteSheetImage:(id)a0 contentRects:(id)a1 frameDurations:(id)a2 loopCount:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsRectForCALayerAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
