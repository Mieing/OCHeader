@class NSString, UIImage;

@interface ACCTemplateTextFragment : NSObject <NSCopying>

@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) BOOL isTextTemplate;
@property (nonatomic) long long indexOfTextClip;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIImage *albumImage;

+ (id)convertFromLVTextFragment:(id)a0;
+ (id)convertFromNLETemplateTextFragment:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
