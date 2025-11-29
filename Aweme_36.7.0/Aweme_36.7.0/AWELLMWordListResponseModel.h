@class NSString, NSArray;

@interface AWELLMWordListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSArray *wordList;

+ (id)wordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
