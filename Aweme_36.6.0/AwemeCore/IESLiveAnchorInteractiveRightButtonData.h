@class NSString, NSDictionary;

@interface IESLiveAnchorInteractiveRightButtonData : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *closeSchema;
@property (retain, nonatomic) NSString *openSchema;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
