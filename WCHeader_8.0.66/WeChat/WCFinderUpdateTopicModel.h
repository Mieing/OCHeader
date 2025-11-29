@class NSString;

@interface WCFinderUpdateTopicModel : NSObject

@property (copy, nonatomic) NSString *inputTopic;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } topicRange;

- (id)initWithInputTopic:(id)a0 topicRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
