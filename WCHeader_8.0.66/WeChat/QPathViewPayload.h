@class UIColor, NSArray;

@interface QPathViewPayload : NSObject

@property (nonatomic) int displayLevel;
@property (nonatomic) int zIndex;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) float lineWidth;
@property (nonatomic) struct { double x; double y; } originPoint;
@property (readonly, nonatomic) struct { double x0; double x1; } *points;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (copy, nonatomic) NSArray *holes;
@property (nonatomic) double radius;
@property (nonatomic) unsigned long long strokeType;
@property (copy, nonatomic) NSArray *lineDashPattern;
@property (copy, nonatomic) NSArray *segmentStyle;
@property (copy, nonatomic) NSArray *segmentColor;

- (id)init;
- (void)setPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)freeOldData;
- (void)dealloc;
- (void).cxx_destruct;

@end
