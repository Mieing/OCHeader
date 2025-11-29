@class NSString, NSMutableArray, UICollectionView;
@protocol MMMultiSelectedContactDisplayViewDelegate;

@interface MMMultiSelectedContactDisplayView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) NSMutableArray *contactList;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long layoutMode;
@property (weak, nonatomic) id<MMMultiSelectedContactDisplayViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getDisplayViewHeight;

- (double)getDisplayItemLen;
- (double)getContentTopOffset;
- (double)getContentRightOffset;
- (double)getContentInterSpacing;
- (double)getContentLineSpacing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initData;
- (void)initView;
- (BOOL)checkAndUpdateSelfHeightForContactCount:(long long)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handleSetExistContacts:(id)a0;
- (void)handleAddNewContact:(id)a0;
- (void)handleRemoveContact:(id)a0;
- (void)reloadData;
- (id)getDisplayViewInNormalState;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isContactExist:(id)a0;
- (void)resetCollectionView;
- (unsigned long long)findAndRemoveContact:(id)a0;
- (void)addContactSpecialMode:(id)a0;
- (void)removeContactSpecialMode:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)genContactItemViewWithContact:(id)a0;
- (void).cxx_destruct;

@end
