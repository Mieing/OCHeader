@class NSSet, NSString, NSArray, NSDictionary, BDECIMCache;
@protocol BDECIMCacheProtocol;

@interface BDECIMClientConfig : NSObject

@property (retain, nonatomic) BDECIMCache *backCacheIMP;
@property (copy, nonatomic) NSSet *inboxes;
@property (nonatomic) long long service;
@property (nonatomic) long long method;
@property (copy, nonatomic) NSString *shortLinkServerURL;
@property (copy, nonatomic) NSArray *wsServerURLs;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *fpID;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) int appVersion;
@property (nonatomic) long long installId;
@property (nonatomic) long long authType;
@property (nonatomic) BOOL enableReportUnreadCountByInbox;
@property (copy, nonatomic) NSDictionary *pullReadStateInboxToBizRoleMapper;
@property (copy, nonatomic) id /* block */ customParamsBlock;
@property (copy, nonatomic) NSDictionary *customHeaders;
@property (copy, nonatomic) id /* block */ customHeadersBlock;
@property (copy, nonatomic) id /* block */ requestCommonParamsBlock;
@property (copy, nonatomic) id /* block */ additionalRequestCommonParamsBlock;
@property (copy, nonatomic) NSArray *bizCustomMethods;
@property (nonatomic) BOOL includeEmptyConversation;
@property (nonatomic) BOOL manuallyEnableWebscoket;
@property (copy, nonatomic) NSArray *typeDataArr;
@property (nonatomic) BOOL parentChildSession;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *customBizID;
@property (nonatomic) BOOL websocketUseDY;
@property (copy, nonatomic) NSSet *filterMsgTypeSet;
@property (weak, nonatomic) id websocketIMP;
@property (copy, nonatomic) NSString *pigeonTrackPrefix;
@property (copy, nonatomic) NSString *IMCloudTrackPrefix;
@property (copy, nonatomic) NSDictionary *bizCustomTrackParams;
@property (nonatomic) BOOL isImChainUser;
@property (nonatomic) BOOL mixChainFlagKeyIsolation;
@property (nonatomic) BOOL enableLoadMsgOnConvUpdate;
@property (nonatomic) unsigned long long getByConversationMaxRecursiveCount;
@property (nonatomic) BOOL isNewStoreUser;
@property (copy, nonatomic) NSDictionary *imsdkConfig;
@property (nonatomic) BOOL ECOMRefactor;
@property (nonatomic) BOOL isInNewUnreadCountAB;
@property (nonatomic) BOOL isLFIM1V1ChatModel;
@property (nonatomic) unsigned long long clientBusinessType;
@property (nonatomic) BOOL readStatePolling;
@property (copy, nonatomic) NSString *pathPrefix;
@property (nonatomic) BOOL trackMessageArriveWhenFilterMessage;
@property (nonatomic) BOOL ignoreFrontendNeedHidden;
@property (nonatomic) BOOL mergeInsertMessageAndConv;
@property (copy, nonatomic) NSArray *notDownsamplingEvent;
@property (nonatomic) BOOL letLongConnectionGoWhenInit;
@property (nonatomic) BOOL canPullUserMessageWhenNotInited;
@property (nonatomic) long long loadOpenConvsInterval;
@property (nonatomic) int ecomServiceInbox;
@property (nonatomic) BOOL enableMessageACK;
@property (nonatomic) BOOL enableMetrics;
@property (nonatomic) long long pullInitListFirstLoadPage;
@property (nonatomic) long long pullInitListMaxPage;
@property (nonatomic) BOOL canPullRecentConversation;
@property (retain, nonatomic) id<BDECIMCacheProtocol> cacheIMP;

- (void).cxx_destruct;
- (id)init;

@end
