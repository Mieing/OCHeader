@class NSString, UIImage;

@interface LVNLETemplateTextFragment : NSObject

@property (copy, nonatomic) NSString *nleSegemntID;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long idxOfTextPayload;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) UIImage *albumImage;
@property (nonatomic) BOOL isTextTemplate;

- (void).cxx_destruct;
- (id)init;

@end
