@class FavoritesItemDataField, NSString, FavoritesItem;

@interface FavFileDetailLogicController : FileDetailLogicController <IFavCdnDownloadMgrExt, FavForwardLogicDelegate, WCActionSheetDelegate, IFavoritesExt, WCFacadeExt>

@property (retain, nonatomic) FavoritesItem *favItem;
@property (retain, nonatomic) FavoritesItemDataField *favData;
@property (nonatomic) BOOL disableAutoDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavItem:(id)a0 fileData:(id)a1;
- (id)initWithTask:(id)a0;
- (BOOL)isDownloading;
- (BOOL)isMinimizeEnable;
- (id)getMinimizeTaskData;
- (id)getHandOffItem;
- (id)getMinimizeKey;
- (BOOL)restoreDataFromMinimizeTaskData:(id)a0;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onEnterRecentUsedTask:(id)a0;
- (void)startDownload;
- (unsigned long long)GetFileSize;
- (id)GetFileName;
- (id)GetFilePath;
- (unsigned int)GetPreviewType;
- (id)getFileExt;
- (void)stopDownload;
- (BOOL)canAddToFavorites;
- (void)onForwardToContact:(id)a0;
- (BOOL)OnPreviewFile:(unsigned int)a0;
- (void)customizeActionSheetInFirstRow:(id)a0 secondRow:(id)a1;
- (BOOL)performCustomizeAction:(id)a0;
- (void)OnOpenByApp:(id)a0;
- (void)onFavTagEditBegin:(int)a0;
- (id)getMusicLocalFileDataUnit;
- (BOOL)autoDownload;
- (void)OnFavCdnDownload:(id)a0 TotalLength:(unsigned long long)a1 FinishLength:(unsigned long long)a2;
- (void)OnFavCdnDownload:(id)a0 RetCode:(int)a1;
- (void)OnUpdateItems:(id)a0;
- (void)OnDelFavoritesItems:(id)a0;
- (void)OnFileDelete;
- (void)onDataChangedWithAdded:(id)a0 andChanged:(id)a1 andDeleted:(id)a2;
- (void)onHomepageUpdate:(long long)a0 withAdded:(id)a1 andChanged:(id)a2 andDeleted:(id)a3 andTip:(id)a4;
- (id)getFavForawrdViewController;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)stopDownloadAppMsgByUser;
- (void).cxx_destruct;

@end
