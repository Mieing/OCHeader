@class NSMutableDictionary;
@protocol WCAdDynamicUpdateLogicDelegate, WCLogicMgrDelegate;

@interface WCAdDynamicUpdateLogic : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableDictionary *updateTimeDic;
@property (weak, nonatomic) id<WCAdDynamicUpdateLogicDelegate> delegate;
@property (weak, nonatomic) id<WCLogicMgrDelegate> wcLogicMgrDelegate;

- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)adDynamicUpdate:(id)a0;
- (void)adDynamicUpdateWithDataList:(id)a0 dataItem:(id)a1 uxInfo:(id)a2 needSpeedy:(BOOL)a3;
- (void)resetDynamicUpdateIntervalForItem:(id)a0;
- (void)handleAdDynamicUpdateResponse:(id)a0;
- (id)collectReqDataList:(id)a0;
- (id)getWeAppLiveReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (id)getFinderTopicReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (id)getLikeNumberReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (id)getFireworkCheerNumberReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (id)getHighlightTagNumberReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (id)getStateSettingBarNumberReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (id)getHotDiscussedBarNumberReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (id)getRandomPickCardInvolveInfoReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (id)getFinderLiveProductInfoReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (id)getRockPaperScissorsInfoReqData:(id)a0 ignoreInterval:(BOOL)a1;
- (BOOL)handleWeAppLiveResponse:(id)a0 dataItem:(id)a1;
- (BOOL)handleFinderTopicResponse:(id)a0 dataItem:(id)a1;
- (BOOL)handleLikeNumberResponse:(id)a0 dataItem:(id)a1;
- (BOOL)handleFireworkCheerNumberResponse:(id)a0 dataItem:(id)a1;
- (BOOL)handleHighlightTagNumberResponse:(id)a0 dataItem:(id)a1;
- (BOOL)handleStateSettingBarNumberResponse:(id)a0 dataItem:(id)a1;
- (BOOL)handleHotDiscussedBarNumberResponse:(id)a0 dataItem:(id)a1;
- (BOOL)handleRandomPickCardInvolveInfoWithResponse:(id)a0 dataItem:(id)a1;
- (BOOL)handleFinderLiveProductInfoWithResponse:(id)a0 dataItem:(id)a1;
- (BOOL)handleRockPaperScissorsInfoWithResponse:(id)a0 dataItem:(id)a1;
- (BOOL)checkUpdateInterval:(id)a0 actionType:(unsigned int)a1 dataItem:(id)a2;
- (long long)getUpdateTime:(id)a0 actionType:(unsigned int)a1;
- (void)setUpdateTime:(id)a0 actionType:(unsigned int)a1 updateTime:(long long)a2;
- (id)genKeyWithSnsId:(id)a0 actionType:(unsigned int)a1;
- (id)genKeyPrefixWithSnsId:(id)a0;
- (int)getUpdateInterval:(unsigned int)a0 dataItem:(id)a1;
- (void).cxx_destruct;

@end
