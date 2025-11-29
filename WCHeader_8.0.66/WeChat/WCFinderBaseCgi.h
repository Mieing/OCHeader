@class WXPBGeneratedMessage, NSArray, NSString, WCFinderPrefetchCache, NSMutableSet, WCFinderCGIProfile;

@interface WCFinderBaseCgi : WCBaseCgi <WCFinderCGIPrefetching> {
    WXPBGeneratedMessage *_request;
}

@property (nonatomic) double startTime;
@property (nonatomic, getter=isCancelTask) BOOL cancelTask;
@property (retain, nonatomic) NSMutableSet *baseProcessingToastErrorCodeSet;
@property (retain, nonatomic) WCFinderPrefetchCache *prefetchCache;
@property (copy, nonatomic) NSArray *objectBaseInfoKeys;
@property (nonatomic) int innerScene;
@property (nonatomic) BOOL reportWithoutSessionBuffer;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) WCFinderCGIProfile *bizCGIProfile;
@property (nonatomic) BOOL needMonitorCGIProfile;
@property (nonatomic) BOOL attachCGIProfileToResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genBaseRequest;
+ (unsigned int)getBaseRequestExtFlag;
+ (void)updateBaseInfosForBaseRequest:(id)a0 tidList:(id)a1 scene:(int)a2 extraKey:(id)a3 useSessionBuffer:(BOOL)a4;
+ (void)updateExptBufferForBaseRequest:(id)a0 withCmdId:(unsigned int)a1;
+ (id)baseJsonDict;
+ (id)baseProcessingToastErrorCodeSet;
+ (id)supportedCodingFormatList;
+ (BOOL)_canUse265;
+ (BOOL)_canUse266;
+ (BOOL)shouldAutoProcessingToastWithErrorCode:(long long)a0;
+ (unsigned long long)genCurrentTimeStamp;

- (BOOL)checkIfUsePrefetch;
- (BOOL)checkIfPrefetchRequestUseCache;
- (BOOL)checkIfConsumeRequestUseCache:(int)a0;
- (void)clearPrefetchCache;
- (BOOL)needADDeviceInfo;
- (void)reportDropPrefetchCache:(id)a0 reason:(unsigned long long)a1;
- (void)start;
- (void)setRequest:(id)a0;
- (id)customSuccessfulRetCodeArray;
- (void)setFeedIDArray:(id)a0 scene:(int)a1;
- (void)setFeedIDArray:(id)a0 scene:(int)a1 extraKey:(id)a2;
- (void)setFeedObjectBaseInfoKeys:(id)a0 scene:(int)a1;
- (void)setFeedIDArrayWithoutSessionBuffer:(id)a0 scene:(int)a1;
- (void)setFeedObjectBaseInfoKeysWithoutSessionBuffer:(id)a0 scene:(int)a1;
- (void)_updateTidInfos;
- (id)additionalUdfKVInfo;
- (unsigned int)additionalExptFlag;
- (void)_updateClientFlagWithScene:(int)a0;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)reportCGIProfileWithWrap:(id)a0;
- (void)cancel;
- (void)addObjectBaseInfoWithSessionBufferModel:(id)a0;
- (void)showToastWithMsg:(id)a0 cancel:(id)a1 confirm:(id)a2 confirmLink:(id)a3;
- (id)request;
- (void).cxx_destruct;

@end
