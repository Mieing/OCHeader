@class StoreEmotionPageShareLogic, NSString, NSArray, EmotionBannerSet, StoreEmotionGetDesignerEmojiListCgi, EmojiInfo, EmoticonStoreReportInfo, EmotionCollectionFooterView, UICollectionView, EmojiTag;

@interface MMStoreEmotionDesignerEmojiViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMNavBarInteractiveDelegate, EmotionCollectionFooterViewDelegate, StoreEmotionGetDesignerEmojiListCgiDelegate, EmoticonHalfScreenSendViewDelegate, MMStoreEmotionTagSelectDelegate, StoreEmotionPageShareLogicDelegate> {
    UICollectionView *m_collectionView;
    EmotionCollectionFooterView *m_collectionFooterView;
    StoreEmotionGetDesignerEmojiListCgi *m_getAllDesignerEmojisCgi;
    StoreEmotionGetDesignerEmojiListCgi *m_curGetDesignerEmojisCgi;
    NSArray *m_tagsList;
    EmojiTag *m_lastSelectedTag;
    unsigned int m_designerUin;
    NSString *m_keyword;
    unsigned long long m_searchId;
    EmotionBannerSet *m_bannerSet;
    unsigned long long m_designerEmojiMode;
    EmojiInfo *m_operatingEmoji;
    StoreEmotionPageShareLogic *m_shareLogic;
}

@property (retain, nonatomic) EmoticonStoreReportInfo *reportInfo;
@property (nonatomic) int entranceScene;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowDesignerEmoji;

- (id)init;
- (id)initWithKeyword:(id)a0 searchId:(unsigned long long)a1;
- (id)initWithDesignerUin:(unsigned int)a0;
- (id)initWithEmojiTag:(id)a0;
- (id)initWithBannerSet:(id)a0;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)a0;
- (void)initView;
- (void)configCollectionView;
- (void)updateCollectionLayout:(id)a0;
- (void)configTagsEntrance;
- (void)configShareEntrance;
- (BOOL)isInTagMode;
- (BOOL)isInSearchMode;
- (void)reportExpose;
- (double)HeadImgHeight;
- (double)bannerSetTitleOffsetY;
- (double)bannerSetHeaderHeight;
- (double)bannerSetTitleHeight;
- (double)bannerSetDescHeight;
- (BOOL)hasHeadImgToShow;
- (void)onClose;
- (void)onOperate:(id)a0;
- (void)onClickTagIcon;
- (void)onGetDesignerEmojiListSuccessedWithTags:(id)a0 DesignerEmojiList:(id)a1 hasMore:(BOOL)a2;
- (void)onGetDesignerEmojiListSuccessedWithDesignerUin:(unsigned int)a0 Tags:(id)a1 DesignerEmojiList:(id)a2 hasMore:(BOOL)a3;
- (void)onGetDesignerEmojiListSuccessedWithKeyword:(id)a0 Tags:(id)a1 DesignerEmojiList:(id)a2 hasMore:(BOOL)a3;
- (void)onGetDesignerEmojiListSuccessedWithTagId:(unsigned int)a0 DesignerEmojiList:(id)a1 hasMore:(BOOL)a2;
- (void)onGetDesignerEmojiListSuccessedWithBannerSetId:(unsigned int)a0 DesignerEmojiList:(id)a1 hasMore:(BOOL)a2;
- (void)onGetDesignerEmojiListFailed;
- (void)onGetDesignerEmojiListFailedWithDesignerUin:(unsigned int)a0;
- (void)onGetDesignerEmojiListFailedWithKeyword:(id)a0;
- (void)onGetDesignerEmojiListFailedWithTagId:(unsigned int)a0;
- (void)onGetDesignerEmojiListFailedWithBannerSetId:(unsigned int)a0;
- (void)onCancelTagSelect;
- (void)onSelectShowAllTag;
- (void)onSelectTag:(id)a0;
- (void)switchToGetDesignerEmojiListCgi:(id)a0;
- (BOOL)isSetNormalToBlackStyle;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void).cxx_destruct;

@end
