@class NSArray;

@interface QDotScatterOverlay : QGLOverlay

@property (copy, nonatomic) NSArray *nodes;
@property (retain, nonatomic) NSArray *colors;
@property (nonatomic) double radius;
@property (nonatomic) BOOL enable3D;
@property (nonatomic) BOOL animated;

- (void)setNeedsDisplay;
- (void *)createImpl;
- (void *)createInfoData;
- (struct vector<tcmapkit::RGBColor, std::allocator<tcmapkit::RGBColor>> { struct RGBColor *x0; struct RGBColor *x1; struct __compressed_pair<tcmapkit::RGBColor *, std::allocator<tcmapkit::RGBColor>> { struct RGBColor *x0; } x2; })processColorCopy;
- (struct ScatterPlotCell **)createScatterData;
- (void)destoryImpl;
- (void)destoryInfoData:(void *)a0;
- (id)init;
- (void)recordGLoverlayCount:(id)a0;
- (void).cxx_destruct;

@end
