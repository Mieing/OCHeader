@class UIImage, LVMediaSegment, NSString;

@interface LVTemplateTextFragment : NSObject

@property (retain, nonatomic) LVMediaSegment *segment;
@property (retain, nonatomic) UIImage *albumImage;
@property (readonly, copy, nonatomic) NSString *payloadID;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;

- (void).cxx_destruct;

@end
