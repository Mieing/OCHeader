@class NSString, NSDictionary;

@interface IESLiveAioLinkSetSeiFieldRequest : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSDictionary *value;
@property (copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
