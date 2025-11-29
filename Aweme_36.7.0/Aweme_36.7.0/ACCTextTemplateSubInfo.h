@class NSString;

@interface ACCTextTemplateSubInfo : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } translation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } normalizSize;
@property (readonly, nonatomic) unsigned long long index;

- (id)initWithText:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2 normalizeSize:(struct CGSize { double x0; double x1; })a3 index:(unsigned long long)a4;
- (void).cxx_destruct;
- (id)initWithJson:(id)a0;

@end
