@class NSString;

@interface NLETextTemplateSubInfoWithTransform : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct CGPoint { double x; double y; } centerPoint;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned long long index;

- (id)initWithJson:(id)a0 playerSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
