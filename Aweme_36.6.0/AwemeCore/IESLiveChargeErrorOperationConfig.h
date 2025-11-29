@class NSNumber, NSString, NSDictionary;

@interface IESLiveChargeErrorOperationConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *operationType;
@property (copy, nonatomic) NSString *operationToastContent;
@property (copy, nonatomic) NSString *operationScheme;
@property (retain, nonatomic) NSNumber *alertAfterToastCount;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertDescription;
@property (copy, nonatomic) NSString *alertActionTitle;
@property (copy, nonatomic) NSString *alertCancelTitle;
@property (copy, nonatomic) NSString *alertActionScheme;
@property (copy, nonatomic) NSString *alertCancelScheme;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
