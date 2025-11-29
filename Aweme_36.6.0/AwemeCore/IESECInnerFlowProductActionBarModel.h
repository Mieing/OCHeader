@class NSArray, NSString;

@interface IESECInnerFlowProductActionBarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *entry;
@property (copy, nonatomic) NSArray *buyButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryJSONTransformer;
+ (id)buyButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
