@class HTSLiveScreenChatMessage;

@interface IESLiveScreenChatMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy

@property (retain, nonatomic) HTSLiveScreenChatMessage *screenChatMessage;

- (BOOL)isOfficial;
- (id)buildData;
- (long long)buildingMode;
- (void)AsyncBuildData:(id /* block */)a0;
- (BOOL)filterWithParams:(id)a0;
- (id)buildDataBasePart;
- (id)userName:(id)a0 limitWithLength:(long long)a1;
- (id)buildDataSyncPartOnSyncMode:(BOOL)a0;
- (id)buildViewModelForOfficialPartWith:(double)a0 officialAvatarSize:(double)a1 danmakuHeight:(double)a2;
- (id)buildViewModelForAdminPartForSyncBuild:(BOOL)a0 fontSize:(double)a1 danmakuHeight:(double)a2;
- (void).cxx_destruct;
- (BOOL)filter;
- (BOOL)isLandscape;

@end
