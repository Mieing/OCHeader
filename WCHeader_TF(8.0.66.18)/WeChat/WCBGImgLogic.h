@class WCDataItem, NSString, NSMutableDictionary, WCLogicMgr;
@protocol WCBGImgLogicNotity;

@interface WCBGImgLogic : MMObject <WCLogicMgrDelegate, WCFacadeExt> {
    WCDataItem *m_lastUploadingDataItem;
    NSMutableDictionary *m_bgUserInfoDictionary;
    NSMutableDictionary *m_coverDataItemDictionary;
    NSString *m_lastDownloadMediaID;
}

@property (retain, nonatomic) WCLogicMgr *logicMgr;
@property (weak, nonatomic) id<WCBGImgLogicNotity> m_delFacade;
@property (nonatomic) BOOL videoCoverEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)middleSquareImage:(id)a0;

- (id)init;
- (id)bgUserInfoDictionary;
- (id)coverDataItemDictionary;
- (void)cleanCache;
- (id)cachedCoverDataItemForUsername:(id)a0;
- (BOOL)updateCachedCoverDataItem:(id)a0 forUsername:(id)a1;
- (id)hashForImageUrl:(id)a0;
- (id)generateBGUserInfoFromDataItem:(id)a0;
- (BOOL)equalCoverInfoInUserInfo1:(id)a0 userInfo2:(id)a1;
- (void)updateVideoCoverConfigurations;
- (id)fetchMyUploadingCoverDataItem;
- (id)fetchCoverDataItemForContact:(id)a0;
- (void)saveSelfWCBackground:(id)a0;
- (void)trySaveSelfWCBackground:(id)a0;
- (id)tryLoadSelfWCBackground;
- (id)coverDataItemByContact:(id)a0;
- (id)backgroundImageByContact:(id)a0;
- (id)loadBackgroundImageFromMediaItem:(id)a0;
- (id)signatureForContact:(id)a0;
- (void)downloadBackgroundImageForContact:(id)a0 withMediaItem:(id)a1;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)SetBGImgByMedia:(id)a0;
- (void)setCoverWithFinderDataItem:(id)a0 image:(id)a1 options:(id)a2;
- (void)SetBGImgByImg:(id)a0;
- (void)SetBGImgByImg:(id)a0 Offset:(double)a1;
- (void)SetBGBySightDraft:(id)a0;
- (void)updateLastUploadDataItem;
- (BOOL)hasBGImg:(id)a0;
- (BOOL)isBGImgLikedForUser:(id)a0;
- (void)setBGImgLikedForUser:(id)a0 source:(long long)a1;
- (void)setBGImgUnlikedForUser:(id)a0 source:(long long)a1;
- (void)updateUserInfo:(id)a0 forUsername:(id)a1;
- (void)userInfoDidChange:(id)a0 forUsername:(id)a1;
- (void)requestCoverDataItemWithContact:(id)a0;
- (void)requestCoverDataItemIfNeededWithContact:(id)a0;
- (void)updateContactBGUserInfo:(id)a0;
- (void)updateCoverInfoForContact:(id)a0;
- (void)updateWCFlagForContact:(id)a0;
- (BOOL)validateSecurityWithMediaItem:(id)a0;
- (BOOL)validateSecurityWithContact:(id)a0;
- (BOOL)validateSecurityWithUserInfo:(id)a0;
- (void)onUpdateDataItemDetailFinished:(long long)a0 itemId:(id)a1 dataItem:(id)a2;
- (void).cxx_destruct;

@end
