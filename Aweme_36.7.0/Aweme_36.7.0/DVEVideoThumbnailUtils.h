@interface DVEVideoThumbnailUtils : NSObject

+ (id)thumbnailImageCache;
+ (id)prefixPlaceholderName;
+ (id)timesWithTotalDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 frameTotalCount:(long long)a1 speed:(double)a2 scale:(double)a3 startTime:(id)a4 countForNeed:(id)a5;
+ (id)pathWithAbsolutePath:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 resourceType:(unsigned long long)a2;
+ (struct CGSize { double x0; double x1; })thumbnailSize;

@end
