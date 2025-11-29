@class NSString, NSArray;

@interface NLETextTemplateInfoWithTransform : NSObject

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } targetTimeRange;
@property (nonatomic) double rotatePI;
@property (nonatomic) struct CGPoint { double x; double y; } scale;
@property (nonatomic) struct CGPoint { double x; double y; } centerPoint;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSString *originJsonString;
@property (copy, nonatomic) NSArray *textInfos;

- (id)initWithJson:(id)a0 playerSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithSlot:(id)a0 playerSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
