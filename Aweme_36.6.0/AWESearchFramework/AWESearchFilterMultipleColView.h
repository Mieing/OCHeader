@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, NSArray, AWESearchFilterBaseManager, NSString, UIView, NSMutableArray;
@protocol AWESearchFilterMultipleColViewDelegate;

@interface AWESearchFilterMultipleColView : UIView <AWESearchFilterSingleListDelegate, AWESearchPOIFilterViewProtocol>

@property (retain, nonatomic) NSMutableArray *listVCArray;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long listDepth;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *selectedModel;
@property (retain, nonatomic) AWESearchFilterBaseManager *tempFilterManager;
@property (nonatomic, getter=isGroupBuyFilterOptimizationEnabled) BOOL groupBuyFilterOptimizationEnabled;
@property (nonatomic) BOOL isNormalSearch;
@property (nonatomic) BOOL isSpeedSelect;
@property (retain, nonatomic) NSArray *listWidthArray;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (readonly, nonatomic) NSArray *contentScrollViews;
@property (weak, nonatomic) id<AWESearchFilterMultipleColViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)depthForModel:(id)a0;
- (void)expandListVCAtIndex:(unsigned long long)a0 model:(id)a1;
- (void)reloadListDataAtIndex:(unsigned long long)a0 model:(id)a1 directRemoveNonReuseFurtherVC:(BOOL)a2;
- (void)removeListVCAfterIndex:(long long)a0;
- (void)updateLastListWidthIfNeed;
- (BOOL)isSubItemInitialUseMaxWidth;
- (void)p_singleVC:(id)a0 didSelectItemWithModel:(id)a1;
- (void)singleListVC:(id)a0 didSelectItemWithModel:(id)a1;
- (void)updateWithModel:(id)a0 filterManager:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
