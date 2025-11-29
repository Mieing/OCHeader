@class NSString, DeviceRankDetailResonse, NSMutableDictionary;

@interface DeviceRankProfileMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, ICdnComMgrExt> {
    DeviceRankDetailResonse *m_selfDeviceRank;
    NSMutableDictionary *m_profileConfig;
}

@property (retain, nonatomic) NSString *m_nsCDNClientID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)GetDeviceRankProfileWithBrandUser:(id)a0 UserName:(id)a1;
- (id)GetDeviceRankCoverImg;
- (void)UpdateDeviceRankCoverWithImg:(id)a0;
- (id)GetDeviceRankMotto;
- (void)UpdateDeviceRankMotto:(id)a0;
- (void)tryLoadDeviceRankProfile;
- (id)GetSelfDeviceRankCache;
- (id)loadCoverImgCache;
- (unsigned int)saveCoverImg:(id)a0;
- (id)getRankCoverCacheFilePath;
- (id)getRankCoverCacheOldPath;
- (id)getRankProfileCacheFilePath;
- (id)getRankProfileHistoryPath;
- (id)getRankProfileCacheOldPath;
- (id)getRankProfileConfigCacheFile;
- (void)saveRankProfile;
- (void)UpdateDeviceRankProfile;
- (void)tryLoadDeviceRankProfileConfig;
- (id)GetDeviceRankProfileConfig;
- (void)setConfigWithObject:(id)a0 key:(id)a1;
- (void)saveProfileConfig;
- (void)addFollowWithFollowItem:(id)a0;
- (void)delFollowWithUserName:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)handleUpdateCoverResponse:(id)a0;
- (void)handleRankGetUserRankDetailResponse:(id)a0;
- (void)handleRankAddFollowResponse:(id)a0;
- (void)handleRankDelFollowResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
