@class IESECWinCategoryFilterItemModel, NSString;

@interface IESECWinCategoryFilterModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECWinCategoryFilterItemModel *normalItem;
@property (retain, nonatomic) IESECWinCategoryFilterItemModel *selectedItem;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *filterID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
