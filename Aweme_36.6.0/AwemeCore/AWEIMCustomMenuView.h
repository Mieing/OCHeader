@class NSArray, UICollectionView, NSString, UIView;

@interface AWEIMCustomMenuView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *menuItemList;
@property (retain, nonatomic) UIView *menuItemsBaseView;
@property (retain, nonatomic) UICollectionView *menuItemsCollectionView;
@property (retain, nonatomic) UIView *triangleView;
@property (nonatomic) BOOL isAnimted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)customMenuDismiss;
+ (void)showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tapLocationInScreen:(struct CGPoint { double x0; double x1; })a1 menuItemList:(id)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuFrameInScreen;
+ (void)customMenuDismissWithoutAnimation;
+ (void)showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highLocationInScreen:(struct CGPoint { double x0; double x1; })a1 lowLocationInScreen:(struct CGPoint { double x0; double x1; })a2 tryHighLocationFirst:(BOOL)a3 menuItemList:(id)a4;

- (id)initWithMenuItemList:(id)a0;
- (void)showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tapLocationInScreen:(struct CGPoint { double x0; double x1; })a1;
- (void)showMenuForBubbleFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highLocationInScreen:(struct CGPoint { double x0; double x1; })a1 lowLocationInScreen:(struct CGPoint { double x0; double x1; })a2 tryHighLocationFirst:(BOOL)a3;
- (void)dismiss;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
