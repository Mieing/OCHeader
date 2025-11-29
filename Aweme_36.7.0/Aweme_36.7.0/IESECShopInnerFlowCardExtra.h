@class NSString, NSDictionary, IESECShopSLICardConfig;

@interface IESECShopInnerFlowCardExtra : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sliceItemType;
@property (copy, nonatomic) NSDictionary *sliceItemActions;
@property (copy, nonatomic) NSDictionary *sliceItemExtra;
@property (copy, nonatomic) NSDictionary *sliceItemStates;
@property (retain, nonatomic) IESECShopSLICardConfig *sliceItemConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sliceItemActionsJSONTransformer;
+ (id)sliceItemExtraJSONTransformer;
+ (id)sliceItemStatesJSONTransformer;
+ (id)sliceItemConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
