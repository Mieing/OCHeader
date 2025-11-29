@class NSString, NSMutableDictionary;

@interface WCFinderProfileMemberShipVideoSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl <WCFinderProfileMemberShipVideoSecDataExt>

@property (retain, nonatomic) NSMutableDictionary *cellHeightMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionDefines;
+ (void)setupRegister:(id)a0;

- (id)data;
- (void)onSectionDataChanged:(id)a0;
- (void)setContactViewModel:(id)a0;
- (id)sections;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (double)minimumInteritemSpacingForIdentifier:(id)a0 section:(long long)a1;
- (long long)displayMaxRow;
- (id)memberShipCell:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)videoCell:(id)a0 identifier:(id)a1;
- (struct CGSize { double x0; double x1; })cellHeightForItem:(long long)a0 collectionView:(id)a1;
- (double)cellDescHeightForContentVM:(id)a0 width:(double)a1;
- (void)onPageSizeChanged;
- (void)onSelectedCellForIdentifier:(id)a0;
- (void)onClickHeaderRightBtn:(id)a0;
- (void)onClickAll:(id)a0;
- (void)onItemExpose:(id)a0 exposeObj:(id *)a1;
- (void)onItemUnExpose:(id)a0 exposeObj:(id *)a1;
- (void)reportItemClick:(id)a0;
- (void)onFeedArrayChanged;
- (void)onMemberShipSecDataExtChange;
- (void).cxx_destruct;

@end
