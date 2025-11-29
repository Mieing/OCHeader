@class NSString, IESECShopGoodsBadgeInfo, IESECShopImageInfo, NSArray, IESECStoreSelectButtonModel;

@interface IESECShopGoodsSortModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long sortType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isCurrentTab;
@property (nonatomic) BOOL canReverse;
@property (nonatomic) long long defaultSort;
@property (copy, nonatomic) NSString *selectParams;
@property (copy, nonatomic) NSString *selectedBackground;
@property (copy, nonatomic) NSString *normalBackground;
@property (copy, nonatomic) NSString *selectedTitle;
@property (retain, nonatomic) IESECShopImageInfo *imageInfo;
@property (retain, nonatomic) IESECShopGoodsBadgeInfo *badgeInfo;
@property (copy, nonatomic) NSArray *subSorts;
@property (copy, nonatomic) IESECStoreSelectButtonModel *selectButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subSortsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)findSelectSortModelFromSubSort;
- (void).cxx_destruct;

@end
