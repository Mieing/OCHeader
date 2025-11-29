@class NSString, NSDictionary;

@interface IESLiveAioLinkGiftAIAgentStorageRequest : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *dimensionKey;
@property (copy, nonatomic) NSString *queryId;
@property (copy, nonatomic) NSString *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
