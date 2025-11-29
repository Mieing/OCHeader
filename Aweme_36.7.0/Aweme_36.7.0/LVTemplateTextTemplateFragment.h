@class NSString, LVMediaSegment;

@interface LVTemplateTextTemplateFragment : LVTemplateTextFragment

@property (retain, nonatomic) LVMediaSegment *textTemplateSegment;
@property (readonly, copy, nonatomic) NSString *textTemplateSegmentID;
@property (readonly, nonatomic) long long idxOfTextPayload;

- (void).cxx_destruct;

@end
