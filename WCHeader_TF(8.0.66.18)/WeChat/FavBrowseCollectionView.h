@class UIView, UILabel, UIColor, UICollectionViewFlowLayout, NSString, NSMutableDictionary, NSMutableArray, UICollectionView, SimpleImgInfo, WCTimeLineFooterView;
@protocol FavBrowseCollectionViewDelegate;

@interface FavBrowseCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MMRefreshTableFooterDelegate> {
    struct map<NSString *, bool, CompareNSString, std::allocator<std::pair<NSString *const, bool>>> { struct __tree<std::__value_type<NSString *, bool>, std::__map_value_compare<NSString *, std::__value_type<NSString *, bool>, CompareNSString>, std::allocator<std::__value_type<NSString *, bool>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, bool>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, bool>, CompareNSString>> { unsigned long long __value_; } __pair3_; } __tree_; } m_dicMsgSelected;
    unsigned long long m_colNum;
    double m_margin;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) SimpleImgInfo *m_curImgInfo;
@property (retain, nonatomic) NSMutableArray *m_arrImgInfo;
@property (retain, nonatomic) NSMutableDictionary *m_dicSectionTitle;
@property (retain, nonatomic) NSMutableDictionary *m_dicMsgsByTitle;
@property (retain, nonatomic) NSMutableDictionary *m_dicWeakMedia;
@property (retain, nonatomic) WCTimeLineFooterView *m_nextLoadingView;
@property (retain, nonatomic) WCTimeLineFooterView *m_preLoadingView;
@property (retain, nonatomic) UIView *m_footerView;
@property (retain, nonatomic) UILabel *m_noImageTip;
@property (nonatomic) double m_headLeftMargin;
@property (retain, nonatomic) UIColor *m_headTitleColor;
@property (nonatomic) double m_scrollOffset;
@property (weak, nonatomic) id<FavBrowseCollectionViewDelegate> m_fastBrowseViewDelegate;
@property (nonatomic) long long m_style;
@property (nonatomic) BOOL m_showCheckMark;
@property (nonatomic) BOOL m_hideSelectAllSection;
@property (nonatomic) BOOL m_bNotMainTable;
@property (nonatomic) BOOL m_enableSwipeMultiSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithImgInfo:(id)a0 withDelegate:(id)a1 style:(long long)a2;
- (void)initData;
- (void)initCollectionView;
- (void)initNoImageTip;
- (void)rebuildMsgData;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)onClickMsgSquareThumb:(id)a0;
- (void)onLongPressMsgSquareThumb:(id)a0;
- (BOOL)onSelectMessage:(id)a0;
- (id)getSelectedMessages;
- (long long)hasSelectedMessagesCount;
- (void)setImgInfoAsSelected:(id)a0;
- (void)selectAllMessages;
- (void)unSelectAllMessages;
- (id)getMsgImageSquareThumbViewWithImgInfo:(id)a0;
- (void)onTransitionToNewSize;
- (void)setTableViewContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updatePreMore:(BOOL)a0 NextMore:(BOOL)a1;
- (void)updateLoading:(BOOL)a0 NextMore:(BOOL)a1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)setTableFooterView:(id)a0;
- (id)getFooterView;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
