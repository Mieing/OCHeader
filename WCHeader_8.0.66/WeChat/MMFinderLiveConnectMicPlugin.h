@class FinderLiveBattleSettingInfo;

@interface MMFinderLiveConnectMicPlugin : MMLiveTaskBaseFunctionPlugin

@property (nonatomic) BOOL isMultiAnchorMicEnabled;
@property (nonatomic) BOOL isAudiencePkEnable;
@property (nonatomic) BOOL isCrossRoomPkEnable;
@property (nonatomic) BOOL isOrdinaryLiveInviteAudienceMicEnabled;
@property (nonatomic) unsigned int locationDisplayTimeInterval;
@property (nonatomic) BOOL isDisplayMicLocationEnabled;
@property (nonatomic) BOOL isUseNewPKPanel;
@property (nonatomic) unsigned int anchorPkPanelChangeSessionOpenTimes;
@property (nonatomic) unsigned int anchorPkPanelChangeSessionDurationTimeS;
@property (retain, nonatomic) FinderLiveBattleSettingInfo *battleSettings;

- (void)updateMultiAnchorMicEnabled:(BOOL)a0;
- (void)updateIsAudiencePkEnable:(BOOL)a0;
- (void)updateIsCrossRoomPkEnable:(BOOL)a0;
- (void)updateIsOrdinaryLiveInviteAudienceMicEnabled:(BOOL)a0;
- (void)updateLocationDisplayTimeInterval:(unsigned int)a0;
- (void)updateIsDisplayMicLocationEnabled:(BOOL)a0;
- (void)updateIsUseNewPKPanel:(BOOL)a0;
- (void)updateAnchorPkPanelChangeSessionOpenTimes:(unsigned int)a0;
- (void)updateAnchorPkPanelChangeSessionDurationTimeS:(unsigned int)a0;
- (void).cxx_destruct;

@end
