@class NSDictionary, NSString, IESECShopSLICardConfig;

@interface IESECShopSWSSLICardConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopSLICardConfig *sliceItemConfig;
@property (copy, nonatomic) NSDictionary *sliceItemActions;
@property (copy, nonatomic) NSDictionary *sliceItemStates;
@property (copy, nonatomic) NSDictionary *sliceItemExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
