@class IESECListKitListModel, NSString, NSArray, IESECExtensionCardApi, IESECWinBFFBaseInfoModel, IESECWinGoodsSortModel, IESECListKitItemDataModel, NSMutableArray, IESECWinMixFullItem, IESECWinCategoryModel, IESECListKitSectionModel;

@interface IESECWinTabListModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECListKitSectionModel *goodsList;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSArray *mixFullCards;
@property (retain, nonatomic) IESECExtensionCardApi *extensionRequest;
@property (copy, nonatomic) NSString *commonPassThrough;
@property (copy, nonatomic) NSString *nextApi;
@property (retain, nonatomic) IESECWinCategoryModel *category;
@property (retain, nonatomic) IESECWinCategoryModel *subCategory;
@property (retain, nonatomic) NSArray *subCategoryList;
@property (retain, nonatomic) NSArray *categoryList;
@property (nonatomic) unsigned long long layout;
@property (nonatomic) long long goodsStickyArea;
@property (retain, nonatomic) IESECWinMixFullItem *topCards;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startObjectRect;
@property (nonatomic) BOOL needReload;
@property (copy, nonatomic) id /* block */ refreshWithListModel;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *forceInsertInfo;
@property (nonatomic) BOOL needInsertCards;
@property (retain, nonatomic) id insertCards;
@property (nonatomic) unsigned long long insertIndex;
@property (retain, nonatomic) NSMutableArray *sortTypes;
@property (retain, nonatomic) NSMutableArray *filterTypes;
@property (copy, nonatomic) NSString *selectedFilterItemID;
@property (nonatomic) unsigned long long selectedFilter;
@property (retain, nonatomic) IESECWinGoodsSortModel *selectedSortItem;
@property (nonatomic) long long currentSort;
@property (copy, nonatomic) id /* block */ getSortRect;
@property (copy, nonatomic) id /* block */ sortHasSticky;
@property (nonatomic) BOOL hideEmptyStatus;
@property (nonatomic) BOOL isSwitchingSort;
@property (nonatomic) long long tabContainerEnum;
@property (copy, nonatomic) NSString *categoryData;
@property (retain, nonatomic) IESECListKitListModel *feed;
@property (retain, nonatomic) IESECWinBFFBaseInfoModel *baseInfo;
@property (readonly, nonatomic) IESECListKitItemDataModel *toolBar;
@property (nonatomic) BOOL isSecondaryPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isProductTab;
- (void).cxx_destruct;

@end
