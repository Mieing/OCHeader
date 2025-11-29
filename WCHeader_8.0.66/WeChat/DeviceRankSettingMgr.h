@class NSString, DeviceRankSetting;

@interface DeviceRankSettingMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    DeviceRankSetting *_rankSetting;
    BOOL bSettingChanged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getRankSettingFilePath;
- (void)loadRankSetting;
- (void)saveRankSetting;
- (BOOL)NeedRecordDataNotify;
- (void)SetRecordDataNotify:(BOOL)a0;
- (BOOL)NeedRankNotify;
- (void)SetRankNotify:(BOOL)a0;
- (BOOL)NeedLikeNotify;
- (void)SetLikeNotify:(BOOL)a0;
- (BOOL)NeedTakePartIn;
- (void)SetTakePartIn:(BOOL)a0;
- (void)UpdateSettingFromSVR;
- (void)UpdateSettingTOSVR;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
