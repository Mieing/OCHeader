@interface AWESearchAIGCServiceConfig : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL disableTransactionAnimate;
@property (nonatomic) BOOL disableRemoveOnNewRound;
@property (nonatomic) BOOL enableCustomComponentDataModel;
@property (nonatomic) BOOL enableAppendCmdPreOrderOptimize;
@property (nonatomic) BOOL enableReplaceCmdPreOrderOptimize;
@property (nonatomic) BOOL enableInsertCmdPreHandleOptimize;
@property (nonatomic) BOOL enableAppendCmdMergeOptimize;
@property (nonatomic) BOOL enableRemoveReplaceCmdOffScreenOptimize;
@property (nonatomic) BOOL enableIgnoreDynamicCardAfterReceiveAllDataOptimize;
@property (nonatomic) BOOL enableOutFoldCards;
@property (nonatomic) BOOL enableNewCustomAIGCService;
@property (nonatomic) BOOL isSuperAgentUseAISearch;
@property (nonatomic) unsigned long long preRequestVerticalType;
@property (nonatomic) BOOL enableFixHeight;
@property (nonatomic) BOOL enableAICardBorderOptimize;
@property (nonatomic) BOOL enableSendSearchRecommendIntegrationToLynx;
@property (nonatomic) BOOL enableSendSearchRecommendIntegrationToLynx2;
@property (nonatomic) BOOL enableClearRSFromHistory;
@property (nonatomic) BOOL disableDoubleColumnTopLayer;
@property (nonatomic) BOOL enableSearchRecommendIntegration;
@property (nonatomic) BOOL notClearStreamDataCache;
@property (nonatomic) BOOL enableStreamDataCacheRepeatFix;
@property (nonatomic) BOOL enableKeepAlive;
@property (nonatomic) BOOL enableFixedCardShrink;
@property (nonatomic) BOOL isHybridIndexPage;
@property (nonatomic) BOOL hitSliderHistorySource;
@property (nonatomic) BOOL isHybridDetailPage;
@property (nonatomic) BOOL disableIndexCmdFromServer;
@property (nonatomic) BOOL disableDetailCmdFromServer;
@property (nonatomic) BOOL splitVisonSearchModeDisableTitle;
@property (nonatomic) BOOL splitVisonSearchModeV2p5Query;

- (BOOL)isUseSSEDirect;

@end
