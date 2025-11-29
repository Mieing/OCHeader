@class NSDictionary, NSString;

@interface AWEVideoMergeFeedbackRecorderParser : NSObject <AWEFeedbackRecorderParserProtocol>

@property (copy, nonatomic) NSDictionary *feedbackLabelAndDescDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mergeStatusLabelDict;

- (void).cxx_destruct;
- (long long)type;
- (id)parse:(id)a0;

@end
