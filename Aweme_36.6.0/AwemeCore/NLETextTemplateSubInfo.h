@class NSString;

@interface NLETextTemplateSubInfo : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) struct CGSize { double width; double height; } normalizSize;
@property (nonatomic) unsigned long long index;

- (id)jsonDic;
- (void).cxx_destruct;
- (id)initWithJson:(id)a0;

@end
