@class NSString;

@interface WCFinderProfileStickerOverviewSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl <EmoticonFinderDesignerContentLogicDelegate>

@property (nonatomic) double emojiCellWidth;
@property (nonatomic) unsigned long long emojiCellLineCount;
@property (nonatomic) double emojiCellMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionDefines;
+ (void)setupRegister:(id)a0;

- (void)dealloc;
- (void)onSectionDataChanged:(id)a0;
- (long long)_moreBtnType;
- (id)contentLogic;
- (void)onPageSizeChanged;
- (BOOL)displayingEmoticon;
- (BOOL)displayingEmoji;
- (BOOL)showHeaderJumpTabButton;
- (BOOL)showBottomJumpTabButton;
- (id)sections;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (double)minimumLineSpacingForIdentifier:(id)a0 section:(long long)a1;
- (double)minimumInteritemSpacingForIdentifier:(id)a0 section:(long long)a1;
- (BOOL)storeItemNeedShowMore;
- (BOOL)signleEmojiNeedShowMore;
- (unsigned long long)emoticonRowMaxCount;
- (unsigned long long)emojiRowMaxCount;
- (void)genEmojiCellWidth;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (void)onSelectedCellForIdentifier:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (long long)seperatorStyleForSection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetForSectionAtIndex:(long long)a0 identifier:(id)a1;
- (id)getNavController;
- (id)getViewController;
- (unsigned long long)DetailVCEntryScene;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)PackCellExtrance;
- (unsigned long long)HalfScreenExtrance;
- (unsigned long long)IPSetCellExtrance;
- (unsigned long long)emoticonEnterScene;
- (unsigned long long)enterIsRed;
- (void)onGotTotalEmoticonCount:(unsigned long long)a0 emojiCount:(unsigned long long)a1;
- (BOOL)isStoreStaticsNeeded;
- (BOOL)isAuthor;
- (BOOL)isSelf;
- (void)onNeedReloadForDataChange;
- (void)onFirstFetchFinished;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)a0 andHasMore:(BOOL)a1;
- (BOOL)isStoreCellNeedBottomLineFor:(unsigned long long)a0;
- (BOOL)isStoreCellNeedHideBtn;
- (BOOL)needsSDKReport;
- (unsigned long long)sdkPageID;
- (id)sdkPageName;
- (id)sdkRequestID;
- (BOOL)needsModifyPageInfo;

@end
