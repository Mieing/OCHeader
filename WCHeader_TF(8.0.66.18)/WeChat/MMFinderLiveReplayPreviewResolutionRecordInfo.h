@interface MMFinderLiveReplayPreviewResolutionRecordInfo : NSObject

@property (nonatomic) double timeOffset;
@property (nonatomic) struct CGSize { double width; double height; } resolutionSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentNormalizeFrame;

+ (id)createResolutionRecordWithTimeOffset:(double)a0 resolutionSize:(struct CGSize { double x0; double x1; })a1 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)createResolutionRecordWithResolutionNode:(id)a0 resolutionSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isSizeValid:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getContentFrameWithResolutionSize:(struct CGSize { double x0; double x1; })a0 contentNormalizeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (BOOL)isSize:(struct CGSize { double x0; double x1; })a0 whPercentSimilarTo:(struct CGSize { double x0; double x1; })a1;

- (BOOL)initResolutionSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isValid;
- (void)createContentNormalizeFrame;

@end
