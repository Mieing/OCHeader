@class IESLiveAnchorInteractiveRightButtonData, NSString, NSDictionary;

@interface IESLiveAnchorInteractiveRightButtonExtra : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveAnchorInteractiveRightButtonData *appData;
@property (retain, nonatomic) NSString *entranceType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
