@class AVAsset, NSString, NSNumber;

@interface AWEMediaExporterConfig : NSObject

@property (readonly, nonatomic) AVAsset *avAsset;
@property (readonly, copy, nonatomic) NSString *exportPath;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) struct CGSize { double width; double height; } exportSize;
@property (retain, nonatomic) NSNumber *averageBitRate;

- (id)initWithAVAsset:(id)a0 exportPath:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 exportSize:(struct CGSize { double x0; double x1; })a3;
- (void).cxx_destruct;
- (id)init;
- (id)resourceIdentifier;

@end
