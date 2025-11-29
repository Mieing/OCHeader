@class NSArray;

@interface AWELLMChatResponseModel : AWEBaseApiModel

@property (nonatomic) long long sessionID;
@property (retain, nonatomic) NSArray *answers;

+ (id)answersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
