@class NSArray, ACCThumbnailCache, AVAsset;

@interface ACCThumbnailDataSource : NSObject

@property (retain, nonatomic) ACCThumbnailCache *thumbnailCache;
@property (copy, nonatomic) NSArray *allTimes;
@property (nonatomic) double thumbnailInterval;
@property (copy, nonatomic) AVAsset *sourceAsset;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

- (void)generateTimeArray;
- (void)setImageView:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1 placeholderImage:(id)a2 withIndex:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
