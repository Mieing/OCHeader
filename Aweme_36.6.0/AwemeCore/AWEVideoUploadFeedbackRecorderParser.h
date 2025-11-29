@class NSDictionary, NSString;

@interface AWEVideoUploadFeedbackRecorderParser : NSObject <AWEFeedbackRecorderParserProtocol>

@property (copy, nonatomic) NSDictionary *feedbackLabelAndDescDict;
@property (copy, nonatomic) NSDictionary *stageOptionAndNameDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uploadStatusLabelDict;

- (void).cxx_destruct;
- (long long)type;
- (id)parse:(id)a0;

@end
