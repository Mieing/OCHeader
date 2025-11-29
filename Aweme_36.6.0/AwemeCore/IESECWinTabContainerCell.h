@class NSString, IESECWinTabContainerObject, IESECSlidingTabContainerView;
@protocol IESECWinTabContainerCellContainerViewDelegate;

@interface IESECWinTabContainerCell : UICollectionViewCell <IESECTabContainerDataSource, IESECTabContainerDelegate, UIScrollViewDelegate> {
    IESECWinTabContainerObject *_object;
}

@property (retain, nonatomic) IESECSlidingTabContainerView *containerView;
@property (weak, nonatomic) id<IESECWinTabContainerCellContainerViewDelegate> cellContainerViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObject:(id)a0;
- (id)tabContainer:(id)a0 tabViewElementForIndex:(long long)a1;
- (long long)numberOfTabViewElementsInTabContainer:(id)a0;
- (void)tabContainer:(id)a0 willMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)tabContainer:(id)a0 cancelMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)tabContainer:(id)a0 didMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;

@end
