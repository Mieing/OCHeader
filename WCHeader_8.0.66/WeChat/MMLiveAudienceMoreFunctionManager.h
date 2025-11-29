@interface MMLiveAudienceMoreFunctionManager : MMLiveMoreFunctionBaseManager

+ (id)getMoreFunctionItemsWithTaskId:(id)a0 viewType:(unsigned long long)a1 isGameLive:(BOOL)a2;
+ (id)getMoreFunctionItemsOutsideLiveRoomWithRewardSwitchInfo:(id)a0 enableRecentWatch:(BOOL)a1 rewardLevelInfo:(id)a2 includeType:(unsigned long long)a3;
+ (id)displayNicknameForSelectedAccount;
+ (BOOL)enableGloryShowSwitch;

- (id)createData:(unsigned long long)a0;
- (id)liveTask;
- (void)reportAudienceActionSheetItems:(id)a0;
- (void)onReportOperationViewDidSelect:(unsigned long long)a0 item:(id)a1;

@end
