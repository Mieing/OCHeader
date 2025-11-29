@class NSArray;

@interface LVTextTemplateInfo : NSObject

@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } targetTimeRange;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } scale;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } translation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } normalizSize;
@property (readonly, copy, nonatomic) NSArray *textInfos;

- (void).cxx_destruct;
- (id)initWithJson:(id)a0;

@end
