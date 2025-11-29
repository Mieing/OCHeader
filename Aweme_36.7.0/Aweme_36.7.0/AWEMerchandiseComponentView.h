@class NSMutableArray, NSArray, NSDictionary, AWEDoubleColumnSearchMerchandiseFilterManager, NSString, AWEDoubleColumnSearchMerchandiseQueryModel, UIView;
@protocol AWEMerchandiseComponentViewDelegate;

@interface AWEMerchandiseComponentView : UIView <AWEMerchandiseComponentItemViewDelegate>

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseQueryModel *model;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (nonatomic) struct { struct _NSRange { unsigned long long location; unsigned long long length; } range; BOOL placeholder; double constraintWidth; struct { NSArray *tabs; NSDictionary *tabsTypeDict; NSDictionary *redPointShowDict; NSString *selectedTab; unsigned long long filterTabType; } tabViewConfig; } viewConfig;
@property (weak, nonatomic) id<AWEMerchandiseComponentViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (nonatomic) BOOL isOnlySupportLightMode;
@property (retain, nonatomic) UIView *ceilingView;
@property (nonatomic) double maxHeight;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;

- (void)relayoutSubViews;
- (void)sendRefreshRequestWithSearchQueryParmas:(id)a0;
- (void)afterLayoutFirstPageRealDataWithContext:(id)a0;
- (void)configWithModel:(id)a0 filterManager:(id)a1;
- (void)configWithModel:(id)a0 config:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; BOOL x1; double x2; struct { id x0; id x1; id x2; id x3; unsigned long long x4; } x3; })a1 filterManager:(id)a2;
- (void)scrollModelToVisible:(id)a0 animated:(BOOL)a1;
- (void)componentItemView:(id)a0 didSelectTabWithTabType:(id)a1;
- (void)componentItemView:(id)a0 didSelectItemWithFilterComponentModel:(id)a1;
- (BOOL)componentItemView:(id)a0 isSelectingWithItemModel:(id)a1;
- (BOOL)viewConfigHasChanged:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; BOOL x1; double x2; struct { id x0; id x1; id x2; id x3; unsigned long long x4; } x3; })a0;
- (void)refreshFilterSectionWithAnimatedTransition;
- (BOOL)isColumnItemStyle:(id)a0;
- (BOOL)tabSortFilterCombinedWithRenderInfo:(id)a0;
- (struct { id x0; id x1; id x2; id x3; unsigned long long x4; })tabBarConfigWithRenderInfo:(id)a0 tabBarConfig:(struct { id x0; id x1; id x2; id x3; unsigned long long x4; })a1;
- (void)reloadData;
- (void).cxx_destruct;

@end
