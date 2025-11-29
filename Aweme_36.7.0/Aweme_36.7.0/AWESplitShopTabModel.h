@class NSString;

@interface AWESplitShopTabModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long goodsCount;
@property (nonatomic) BOOL isThisTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
