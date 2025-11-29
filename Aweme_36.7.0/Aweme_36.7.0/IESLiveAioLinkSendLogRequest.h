@class NSArray, NSDictionary, NSString;

@interface IESLiveAioLinkSendLogRequest : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *logParams;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
