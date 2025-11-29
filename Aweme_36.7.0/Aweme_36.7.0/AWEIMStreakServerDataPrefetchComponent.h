@class NSString;

@interface AWEIMStreakServerDataPrefetchComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMStreakServerDataPrefetchInterface, AWEIMStreakPetElfOpenHunterContainerAction, AWEIMStreakDataCenterMessage, AWEIMChatMessageTransferUtilityMessage>

@property (nonatomic) BOOL isFetchingAchieveData;
@property (nonatomic) BOOL isFetchingInviteData;
@property (nonatomic) BOOL shouldCheckServerDataStatus;
@property (nonatomic) BOOL isUsingPetElfWidget;
@property (nonatomic) long long fetchAchieveDataReason;
@property (retain, nonatomic) NSString *fetchInviteServerDataPetElfIDStr;
@property (retain, nonatomic) NSString *fetchAchieveServerDataPetElfParentingStr;
@property (retain, nonatomic) NSString *fetchAchieveServerDataFlameColor;
@property (nonatomic) long long fetchAchieveServerDataChangeReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)imStreakDataDidUpdateWithConversation:(id)a0;
- (void)didOpenStreakPetElfContainerWithContainerScene:(long long)a0;
- (void)logWithExecutePhase:(id)a0 eventName:(id)a1 extra:(id)a2;
- (void)fetchInviteCardServerDataWithCompletion:(id /* block */)a0;
- (void)transferToAlreadyExistingChatPageWithCid:(id)a0 params:(id)a1;
- (void)p_initialComponent:(id)a0;
- (void)refreshInviteServerData;
- (void)refreshAchieveServerDataWithNoti:(id)a0;
- (id)streakPetElfIDs;
- (id)streakPetElfParentingData;
- (BOOL)shouldFetchInviteCardServerDataWithCurrentWaterLevel:(id)a0;
- (void)fetchInviteCardServerDataWithTrackDataChangeAfterPageOpen:(BOOL)a0 requestSource:(id)a1;
- (void)logTriggerPath:(id)a0;
- (BOOL)shouldFetchFullAchieveData;
- (void)fetchAchieveServerDataWithTrackDataChangeAfterPageOpen:(BOOL)a0 requestSource:(id)a1 updateExtKeyAndDataModules:(id)a2;
- (id)incrementalUpdateAchieveDataModules;
- (void)recordCurrentInviteServerDataWaterLevel;
- (void)recordCurrentAchieveServerDataWaterLevel;
- (id)currentStreakColorStr;
- (void)fetchInviteCardServerDataWithTrackDataChangeAfterPageOpen:(BOOL)a0 requestSource:(id)a1 completion:(id /* block */)a2;
- (void)checkAndFetchServerData;
- (BOOL)enableInvitePreRequestWithCon:(id)a0;
- (void)logShouldFetchWithRequestPath:(id)a0 result:(BOOL)a1 reason:(id)a2;
- (void)p_trackInviteDataIsChange;
- (id)currentConversationCon;
- (void)logCompareData:(id)a0;
- (BOOL)enableAchievePreRequestWithCon:(id)a0;
- (BOOL)isDataChangeOfPetElfParentingWithFirstString:(id)a0 andSecondString:(id)a1;
- (BOOL)isCurrentTimeInRangeWithStartTime:(id)a0 endTime:(id)a1;
- (void)updateAchieveData:(id)a0 withUpdateExtKeyAndDataModules:(id)a1 fetchStartTime:(double)a2;
- (void)p_trackAchieveDataIsChange;
- (void)updateIncrementalUpdateAchieveData:(id)a0 withUpdateExtKeyAndDataModules:(id)a1;
- (void)updateFullAchieveData:(id)a0 fetchStartTime:(double)a1;
- (id)mergeDataVersionWithServerData:(id)a0 localData:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
