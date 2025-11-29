@class NSString, EmoticonFinderDesignerDataCenter, EmoticonFinderDesignerContentLogic;
@protocol WCFinderProfileStickerTabPageModelDelegate;

@interface WCFinderProfileStickerTabPageModel : WCFinderStreamProfilePageModel <EmoticonFinderDesignerContentLogicDelegate>

@property (retain, nonatomic) EmoticonFinderDesignerContentLogic *contentLogic;
@property (retain, nonatomic) EmoticonFinderDesignerContentLogic *mainTabContentLogic;
@property (retain, nonatomic) EmoticonFinderDesignerDataCenter *dataCenter;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL didLoadFail;
@property (nonatomic) double beginFetchData;
@property (weak, nonatomic) id<WCFinderProfileStickerTabPageModelDelegate> delegate;
@property (readonly, nonatomic) unsigned long long maxStoreItemDisplayCount;
@property (readonly, copy, nonatomic) NSString *finderUserName;
@property (readonly, nonatomic) unsigned int designerUin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowLimitMode;
+ (BOOL)recordTabDisplayFlagToExtInfo;
+ (id)overviewSectionTypes;
+ (int)tabId;

- (BOOL)shouldDisplayTab;
- (void)doLoadCache;
- (void)requestPageData;
- (void)prepareLogic;
- (void)_loadData;
- (BOOL)hasItemsToShow;
- (id)displayName;
- (id)viewPageClassName;
- (void)onFirstFetchFinished;
- (void)_updateOverviewSection;
- (void)onFirstFetchFailed;
- (void)onFetchEmoticonDataFailedForType:(unsigned long long)a0;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)a0 andHasMore:(BOOL)a1;
- (void)onNeedReloadForDataChange;
- (void)onGotTotalEmoticonCount:(unsigned long long)a0 emojiCount:(unsigned long long)a1;
- (id)getNavController;
- (id)getViewController;
- (unsigned long long)DetailVCEntryScene;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)PackCellExtrance;
- (unsigned long long)HalfScreenExtrance;
- (unsigned long long)emoticonEnterScene;
- (BOOL)isStoreCellNeedBottomLineFor:(unsigned long long)a0;
- (BOOL)isStoreStaticsNeeded;
- (BOOL)isAuthor;
- (BOOL)isSelf;
- (BOOL)needsSDKReport;
- (BOOL)needsModifyPageInfo;
- (id)sdkRequestID;
- (unsigned long long)sdkPageID;
- (id)sdkPageName;
- (int)enterHasRedDot;
- (void)reportExposeTab:(int)a0;
- (void)reportClickTab:(int)a0;
- (void)report:(long long)a0 commentScene:(int)a1;
- (void).cxx_destruct;

@end
