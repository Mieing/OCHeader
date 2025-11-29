@class NSString, NSMutableArray;

@interface DeviceRankUsersMgr : MMUserService <MMServiceProtocol> {
    NSMutableArray *m_deviceRankUserList;
    BOOL m_bLoaded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)tryLoadDeviceRankUsers;
- (id)getRankUserProfileFilePath;
- (void)SaveDeviceRankUsers;
- (id)getCoverUrlByUserName:(id)a0;
- (void)updateOrAddCoverUrl:(id)a0 WithUsername:(id)a1;
- (void).cxx_destruct;

@end
