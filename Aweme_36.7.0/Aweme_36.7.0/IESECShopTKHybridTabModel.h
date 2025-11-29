@class NSString, NSArray, IESECShopDynamicTabDataModel;

@interface IESECShopTKHybridTabModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tmpId;
@property (copy, nonatomic) NSString *passThroughFE;
@property (copy, nonatomic) NSString *tabEventName;
@property (copy, nonatomic) NSString *tabEventExtraParams;
@property (copy, nonatomic) NSArray *tabScrollViewIds;
@property (retain, nonatomic) IESECShopDynamicTabDataModel *tabData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
