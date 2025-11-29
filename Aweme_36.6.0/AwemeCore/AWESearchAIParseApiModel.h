@class AWESearchAIParseModel, NSString;

@interface AWESearchAIParseApiModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchAIParseModel *data;
@property (retain, nonatomic) NSString *requestId;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
