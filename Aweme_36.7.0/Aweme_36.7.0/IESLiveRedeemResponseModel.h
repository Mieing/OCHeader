@class NSArray, IESLiveRedeemResponseModelExtra, NSDictionary, NSString;

@interface IESLiveRedeemResponseModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *redeemModels;
@property (retain, nonatomic) IESLiveRedeemResponseModelExtra *extra;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)redeemModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
