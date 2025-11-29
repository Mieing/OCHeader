@class NSString, NSArray, NSDictionary;

@interface AWEFormatLiveGenerateTopicConfig : NSObject

@property (copy, nonatomic) NSString *topicSug;
@property (copy, nonatomic) NSArray *analyzeDataList;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
