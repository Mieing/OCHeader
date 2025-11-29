@class AWEVideoPublishViewModel;

@interface AWEPublishModelFlowHandle : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (BOOL)isNewStoryDailyPublishPageButtonStyleStatus;
- (BOOL)isLivePlayBack;
- (void)saveOrignalDraftWithCompletion:(id /* block */)a0;
- (void)saveHashtagWithPublishState:(BOOL)a0;
- (void)publishStep;
- (void)savePollStickerInfos;
- (void)saveDraftWithBackup:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isShowToastHashTagCountLimitIfNeeded;
- (void)configForStoryWithTitlePreserve:(BOOL)a0;
- (void)configMusickSelectedFrom;
- (void)configCommon;
- (void)setHashtagFlag;
- (void)setItemDonwloadAllPeople;
- (BOOL)publishShouldShowRedPacketAlert;
- (void)markPublishRedPacketAlertShowed;
- (void)addCurrentLocationInfoWithShowPOI:(BOOL)a0;
- (BOOL)publishRedPacketDateValid;
- (BOOL)p_isRedpacketTaskAcitivity:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
