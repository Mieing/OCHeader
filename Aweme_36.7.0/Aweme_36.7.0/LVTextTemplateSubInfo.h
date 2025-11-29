@class NSString;

@interface LVTextTemplateSubInfo : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } translation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } normalizSize;
@property (readonly, nonatomic) unsigned long long index;

- (void).cxx_destruct;
- (id)initWithJson:(id)a0;

@end
