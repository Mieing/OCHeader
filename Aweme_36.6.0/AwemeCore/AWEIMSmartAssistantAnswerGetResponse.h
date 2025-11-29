@class NSArray;

@interface AWEIMSmartAssistantAnswerGetResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *suggestMessages;
@property (nonatomic) long long recommendID;

+ (id)suggestMessagesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
