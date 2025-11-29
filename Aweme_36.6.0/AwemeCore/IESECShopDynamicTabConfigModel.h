@class NSString, NSArray;

@interface IESECShopDynamicTabConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabEventName;
@property (copy, nonatomic) NSString *tabEventExtraParams;
@property (nonatomic) BOOL needDynamicData;
@property (copy, nonatomic) NSString *tabApiPath;
@property (copy, nonatomic) NSString *tabApiExtraParams;
@property (copy, nonatomic) NSArray *tabScrollViewIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
