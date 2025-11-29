@class IESECWinSortSectionController, IESECServiceProxy, IESECWinCategorySectionController, NSString;
@protocol IESECWinTabLayoutService, IESECWinCategoryService;

@interface IESECWinSortCellController : IESECWinListKitCellController <IESECWinSortSectionControllerDelegate>

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECWinSortSectionController *sortSectionController;
@property (retain, nonatomic) IESECWinCategorySectionController *categorySectionController;
@property (nonatomic) BOOL showSortCell;
@property (nonatomic) BOOL showFilterCell;
@property (nonatomic) BOOL showSubCategoryCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)didSelected;
- (void)configCell;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)didEndDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (id)viewControllerForSortController;
- (void).cxx_destruct;

@end
