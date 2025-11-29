@interface AWEECOMIMABTestService : NSObject

+ (BOOL)enableEcomBoxOpt;
+ (BOOL)enableEcomBoxRedDotOpt;
+ (BOOL)fixDarkThemeChange;
+ (void)registerDetailFoldPrecisionConfig;
+ (void)registerDetailWaitQueueNoticeStyle;
+ (BOOL)enableSendFile;
+ (BOOL)enableSendMediaEdit;
+ (BOOL)enableMarkdownMsg;
+ (void)registerABExperiments;
+ (void)storeTccConfigWithData:(id)a0;
+ (double)imTokenCacheMaxAge;
+ (BOOL)enableLoadMsgByDirection;
+ (long long)newStoreDeleteDatabaseVersion;
+ (BOOL)enableDynamicRefactor;
+ (BOOL)enableDynamicCardViewV2Cache;
+ (BOOL)enableCameraShootV2;
+ (unsigned long long)forwardMsgType;
+ (BOOL)enableMsgDeleteAndLocate;
+ (BOOL)enableLGUIMsgNewStyle;
+ (id)IMShopMsgTabTitleText;
+ (long long)dynamicCardViewV2CacheMaxCount;
+ (long long)chatDetailExtraCardTimeInterval;
+ (id)detailNoticeConfig;
+ (id)detailFoldNormalConfig;
+ (id)detailFoldPrecisionConfigWithExposure:(BOOL)a0;
+ (long long)detailWaitQueueNoticeStyleWithExposure:(BOOL)a0;
+ (long long)totalUnreadConversationCount;
+ (long long)levelForNewUnreadCountModel;
+ (id)receiveMsgTimeoutRecoverConfig;
+ (BOOL)disableCheckContinuousKickoff;
+ (BOOL)enableTrackTimxDispatchQueue;
+ (BOOL)enableTrackWrongGetUserMessage;
+ (BOOL)enableGetUserMessageSingleInstance;
+ (long long)timxECOMDispatchType;
+ (BOOL)enableTIMXGetUserMessageHandlerV2;
+ (BOOL)enableTIMXGetUserMessageHandlerV2SyncStrategy;
+ (BOOL)enableTIMXAsyncMessageVisible;
+ (BOOL)enableTIMXBatchUpdateConversation;
+ (long long)rcvMsgTrackType;
+ (BOOL)enableFTSWCDBToTwo;
+ (unsigned long long)chatListSyncMainQueueType;
+ (BOOL)enableBigScreenLargeSize;
+ (double)bigScreenFontSizeRatio;

@end
