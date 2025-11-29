@class NSMutableDictionary, NSString, UIImage, NSMutableArray, ChatBackgroundSettings;

@interface ChatBackgroundMgr : MMUserService <MMServiceProtocol, MMPackageDownloadMgrExt> {
    NSString *m_nsCachePathString;
    UIImage *m_ocacheImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_cacheRect;
}

@property (retain, nonatomic) ChatBackgroundSettings *m_settings;
@property (retain, nonatomic) NSMutableDictionary *m_downloadTaskBook;
@property (retain, nonatomic) NSMutableArray *m_serverItems;
@property (retain, nonatomic) NSMutableArray *m_downloadingItems;
@property (retain, nonatomic) NSMutableArray *m_cancelingItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)setDownadFinishedCID:(long long)a0 forUsername:(id)a1;
- (id)getDownloadFinishedUsernameForCID:(long long)a0;
- (BOOL)createDirIfNotExist:(id)a0;
- (void)loadAllItems;
- (BOOL)isChatBKZipInBundle;
- (BOOL)installChatUpdatePack:(id)a0;
- (BOOL)unPackChatBackgroundPackIfNotExist;
- (BOOL)unPackChatBackgroundPackToDir;
- (void)loadUserChatBackgroundSetting;
- (void)saveUserChatBackgroundSetting;
- (id)getBackgroundPreferenceForUsername:(id)a0;
- (void)setBackgroundPreference:(id)a0 forUsername:(id)a1;
- (BOOL)setBackgroundPreferenceByCustomImage:(id)a0 forUsername:(id)a1;
- (BOOL)setBackgroundPreferenceByCustomImage:(id)a0 forUsername:(id)a1 notify:(BOOL)a2;
- (void)resetAllPreferece;
- (id)imageInPath:(id)a0;
- (id)getThumbImageViewForCID:(id)a0;
- (id)getChatBackgroundViewForUser:(id)a0;
- (void)addBgMaskToImageView:(id)a0;
- (void)replaceOrInsertCustomImage:(id)a0 andUsername:(id)a1;
- (id)customImageNameFor:(id)a0;
- (BOOL)isBkPhotoExistInNewPath:(id)a0;
- (id)getChatBackgroundImagePathForUser:(id)a0;
- (void)updateListenerData;
- (void)tryUpdateListFromServer;
- (id)getAllItemsList;
- (void)downloadItem:(id)a0 forUsername:(id)a1;
- (void)cancelItem:(id)a0;
- (void)onPackageListUpdated:(id)a0;
- (void)onPackageDownloadProcessUpdated:(id)a0 downloadSize:(int)a1 totalSize:(int)a2;
- (void)onPackageDownloadFinish:(id)a0 package:(id)a1;
- (void)onPackageCancelFinish:(id)a0;
- (void)removeAllCustomImages;
- (void)addServerItem:(id)a0;
- (void)removeServerItem:(id)a0;
- (void)addDownloadingItem:(id)a0;
- (void)removeDownloadingItem:(id)a0;
- (void)addCancelingItem:(id)a0;
- (void)removeCancelingItem:(id)a0;
- (id)usernameKv;
- (void).cxx_destruct;

@end
