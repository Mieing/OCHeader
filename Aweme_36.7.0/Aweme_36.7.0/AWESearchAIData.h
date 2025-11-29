@class NSArray, NSDictionary, NSString, AWESearchAICopilotData;

@interface AWESearchAIData : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *AISearchRealTimeReq;
@property (nonatomic) BOOL needAISearchRealTimeReq;
@property (copy, nonatomic) NSArray *cardAIContent;
@property (copy, nonatomic) NSString *textClickSchema;
@property (retain, nonatomic) AWESearchAICopilotData *copilotData;
@property (nonatomic) BOOL isAIDeepMode;

+ (id)copilotDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
