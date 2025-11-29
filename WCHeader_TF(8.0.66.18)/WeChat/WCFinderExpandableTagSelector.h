@class UIFont, UIView, NSArray, NSString, NSMutableDictionary, NSDictionary, WCFinderExpandableTagSelectorExpandInfo, NSMutableSet, UICollectionView, NSMutableArray, UIColor;
@protocol WCFinderExpandableTagSelectorDelegate, WCFinderExpandableTagSelectorDataSource;

@interface WCFinderExpandableTagSelector : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableArray *rootViews;
@property (retain, nonatomic) UIView *expandView;
@property (retain, nonatomic) UIView *itemContainerView;
@property (retain, nonatomic) UICollectionView *itemCollectionView;
@property (retain, nonatomic) WCFinderExpandableTagSelectorExpandInfo *expandInfo;
@property (nonatomic) struct DelegateFlag { unsigned char supportSelected : 1; } delegateFlag;
@property (retain, nonatomic) NSMutableSet *displayItems;
@property (retain, nonatomic) NSMutableDictionary *userManualSelecteds;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIColor *panelTextColor;
@property (retain, nonatomic) UIColor *panelSelectedTextColor;
@property (retain, nonatomic) UIColor *panelSelectedCardColor;
@property (nonatomic) double itemPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, nonatomic) NSDictionary *selectedItems;
@property (retain, nonatomic) NSDictionary *defaultSelecteds;
@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) id<WCFinderExpandableTagSelectorDataSource> dataSource;
@property (weak, nonatomic) id<WCFinderExpandableTagSelectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setupRootItems;
- (id)itemViewForIdentifier:(id)a0;
- (void)sizeToFitButton:(id)a0 textIconPadding:(double)a1;
- (void)setButton:(id)a0 arrowOpen:(BOOL)a1;
- (void)_updateItemViewStatus:(id)a0 level:(long long)a1;
- (void)_layoutButtons;
- (void)layoutSubviews;
- (void)hiddenPanel;
- (void)_hiddenSelectPanel;
- (void)_onButtonClick:(id)a0;
- (id)createCollectionView;
- (double)calculateExpandHeight;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)isItemSelected:(id)a0 identifier:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)_fetchNumberOfGroupCount:(id)a0 group:(long long)a1;
- (id)_fetchIdentifier:(id)a0 indexPath:(id)a1;
- (struct Group { long long x0; id x1; } *)_fetchGroupInfo:(id)a0 group:(long long)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
