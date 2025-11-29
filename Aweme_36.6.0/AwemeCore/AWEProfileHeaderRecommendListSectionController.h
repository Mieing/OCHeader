@class NSString, NSMutableArray;
@protocol AWEProfileHeaderFollowAreaActionDelegate;

@interface AWEProfileHeaderRecommendListSectionController : AWEBaseListSectionController <AWEListSectionControllerDelegate>

@property (retain, nonatomic) NSMutableArray *binds;
@property (weak, nonatomic) id<AWEProfileHeaderFollowAreaActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateFinalLayoutAttributes:(id)a0 forDisappearingCellAtIndex:(long long)a1 isDeleted:(BOOL)a2;
- (void)updateInitialLayoutAttributes:(id)a0 forAppearingCellAtIndex:(long long)a1 isInserted:(BOOL)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)showSeparator;
- (Class)cellClass;

@end
