@class UIColor, UIFont, NSString, UIView, NSMutableArray, NSNumber;
@protocol ContactsViewTagListCollectionViewDelegate;

@interface ContactsViewTagListCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ContactTagCreateTagHalfScreenViewControllerDelegate>

@property (retain, nonatomic) NSMutableArray *tagList;
@property (weak, nonatomic) id<ContactsViewTagListCollectionViewDelegate> m_delegate;
@property (retain, nonatomic) NSMutableArray *m_arrSelectedTagId;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) BOOL singleSelectMode;
@property (nonatomic) double tagViewCornerRadius;
@property (nonatomic) BOOL bHiddeCreateTag;
@property (retain, nonatomic) UIColor *tagButtonTextColor;
@property (retain, nonatomic) UIFont *tagButtonTextFont;
@property (retain, nonatomic) NSNumber *tagImageType;
@property (retain, nonatomic) NSString *createTagSpecifyName;
@property (copy, nonatomic) id /* block */ handleCreateTagBolck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initData;
- (void)updateWithTags:(id)a0;
- (void)resetUpdateWithTags:(id)a0;
- (id)getTagList;
- (id)getTagNameList;
- (void)setButtonHighLight:(BOOL)a0 named:(id)a1;
- (void)highLightButtons:(id)a0;
- (void)highLightButtonsWithTagIdSet:(id)a0;
- (void)unHighLightAll;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)triggerCreateTagButton;
- (void)onClickCreateTagButton;
- (void)OnNewContactTagCreateTagWithTagId:(unsigned int)a0 result:(BOOL)a1 isRename:(BOOL)a2;
- (struct CGSize { double x0; double x1; })itemSizeForTagName:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCreatTagCell;
- (void).cxx_destruct;

@end
