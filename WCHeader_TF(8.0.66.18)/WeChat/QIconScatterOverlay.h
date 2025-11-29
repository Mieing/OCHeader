@class NSArray;

@interface QIconScatterOverlay : QGLOverlay

@property (copy, nonatomic) NSArray *nodes;
@property (retain, nonatomic) NSArray *icons;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL enable3D;

- (void)setNeedsDisplay;
- (void *)createImpl;
- (void *)createInfoData;
- (void)createBitmaps:(void *)a0 from:(void *)a1;
- (struct ScatterPlotCell **)createScatterData;
- (void)destoryInfoData:(void *)a0;
- (id)init;
- (void)destoryImpl;
- (void)recordGLoverlayCount:(id)a0;
- (void).cxx_destruct;

@end
