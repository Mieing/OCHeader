@class NSMutableArray, EntranceReportSwitch_EntranceReportConfig;

@interface EntranceReportSwitch : WXPBGeneratedMessage

@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *discoveryConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *fgConfig;
@property (nonatomic) BOOL isMerge;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *enterSnsConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *exitSnsConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *snsExposeLastFeedConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *snsExposeNFeedConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *reddotSessionReportConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *snsDelivery;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *snsDeliveryTriggerConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *appPushTriggerConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *discoveryTabExposeConfig;
@property (retain, nonatomic) NSMutableArray *mergeSceneList;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *globalSearchConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *shareStreamTriggerConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *discoveryTabExposeSocialHotSpotConfig;
@property (retain, nonatomic) EntranceReportSwitch_EntranceReportConfig *enterFinderConfig;

+ (void)initialize;

- (void)setEnterFinderConfig:(id)a0;
- (id)enterFinderConfig;
- (void)setDiscoveryTabExposeSocialHotSpotConfig:(id)a0;
- (id)discoveryTabExposeSocialHotSpotConfig;
- (void)setShareStreamTriggerConfig:(id)a0;
- (id)shareStreamTriggerConfig;
- (void)setGlobalSearchConfig:(id)a0;
- (id)globalSearchConfig;
- (void)setMergeSceneList:(id)a0;
- (id)mergeSceneList;
- (void)setDiscoveryTabExposeConfig:(id)a0;
- (id)discoveryTabExposeConfig;
- (void)setAppPushTriggerConfig:(id)a0;
- (id)appPushTriggerConfig;
- (void)setSnsDeliveryTriggerConfig:(id)a0;
- (id)snsDeliveryTriggerConfig;
- (void)setSnsDelivery:(id)a0;
- (id)snsDelivery;
- (void)setReddotSessionReportConfig:(id)a0;
- (id)reddotSessionReportConfig;
- (void)setSnsExposeNFeedConfig:(id)a0;
- (id)snsExposeNFeedConfig;
- (void)setSnsExposeLastFeedConfig:(id)a0;
- (id)snsExposeLastFeedConfig;
- (void)setExitSnsConfig:(id)a0;
- (id)exitSnsConfig;
- (void)setEnterSnsConfig:(id)a0;
- (id)enterSnsConfig;
- (void)setIsMerge:(BOOL)a0;
- (BOOL)isMerge;
- (void)setFgConfig:(id)a0;
- (id)fgConfig;
- (void)setDiscoveryConfig:(id)a0;
- (id)discoveryConfig;

@end
