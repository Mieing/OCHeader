@class NSNumber, NSDictionary, NSString;

@interface IESLiveTrialExchangeModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *cashAmount;
@property (retain, nonatomic) NSNumber *goldAmount;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
