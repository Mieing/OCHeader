@class NSArray, NSString;

@interface IESLiveAioLinkServiceConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *methodList;
@property (copy, nonatomic) NSString *protocolName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
