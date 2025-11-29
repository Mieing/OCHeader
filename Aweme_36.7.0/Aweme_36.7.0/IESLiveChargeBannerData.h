@class NSArray, NSDictionary, NSString;

@interface IESLiveChargeBannerData : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *diamondExtraArray;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diamondExtraArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
