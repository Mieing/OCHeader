@interface MJCaptionUtilities : NSObject

+ (id)audioIDWithMeidaFileURL:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
+ (id)assetIDWithMeidaFileURL:(id)a0;
+ (id)changeSpeedWithCaptionGroups:(id)a0 speedRatio:(double)a1;
+ (id)adjustCaptionItems:(id)a0 addingStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)sortCaptionItems:(id)a0;
+ (void)captionSegment:(id)a0 bindAssetIDWithMeidaFileURL:(id)a1;
+ (id)getAssetIDWithCaptionSegment:(id)a0;
+ (id)getAudioIDWithCaptionSegment:(id)a0;

@end
