@class NSString, NSDictionary;

@interface IESLiveAnchorInteractiveDebugButtonExtra : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *linkSchema;
@property (retain, nonatomic) NSString *debugTitle;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
