@class RTVCustomPopoverSheetContext, DUXPopover, UICollectionView, NSArray, AWEPopoverActionSheet, NSString;
@protocol RxInjector;

@interface RTVCustomPopoverSheetController : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, __RTVCustomPopoverSheetActionCellDelegate, DUXPopoverCoverViewDelegate, RTVCustomPopoverSheetControllerInterface>

@property (retain, nonatomic) AWEPopoverActionSheet *popoverView;
@property (retain, nonatomic) DUXPopover *duxPopover;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *cellModels;
@property (retain, nonatomic) RTVCustomPopoverSheetContext *context;
@property (nonatomic) double padding;
@property (nonatomic) double width;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissPopoverView;
- (void)__createComponents;
- (void)showForView:(id)a0 direction:(unsigned long long)a1 dataBuilder:(id /* block */)a2 context:(id)a3;
- (unsigned long long)__transferDUXPopoverPositionWithDirection:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })__getDUXPopoverTargetPointWithPosition:(unsigned long long)a0 target:(id)a1;
- (double)__fixedContentHeight;
- (void)__registerReusableViewForCollecionView;
- (void)dimissPopoverSheet;
- (void)coverViewDidHit;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;

@end
