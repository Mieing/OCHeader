@class NSString, NSArray, NSDictionary;

@interface IESECWinComponentResponse : IESECBaseApiModel

@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *components;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *extraSchema;

+ (id)componentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
