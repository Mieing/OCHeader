@class NSString, NSMutableArray;

@interface IESLLPOITrackerService : HTSService <IESLLPOITrackerService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _interceptorReadWriteLock;
}

@property (retain, nonatomic) NSMutableArray *interceptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)injectBlockExecuteAfterServiceInit:(id /* block */)a0;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)onServiceInit;
- (void)forwardToCustomPage:(id)a0;
- (id)getBTMPageInfo:(id)a0;
- (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2;
- (BOOL)updateBtmPage:(id)a0 sourceBtmToken:(id)a1;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1 options:(id)a2;
- (void)setBcmPageParams:(id)a0 host:(id)a1 clearOldValue:(BOOL)a2;
- (void)addInterceptor:(id)a0;
- (id)getBcmChainWithHost:(id)a0 chainLength:(unsigned long long)a1 isDomainStandard:(BOOL)a2;
- (void)removeInterceptor:(id)a0;
- (void)trackEvent:(id)a0 params:(id)a1 btmInfo:(id)a2;
- (void)verifyEvent:(id)a0 params:(id)a1 checkTypes:(unsigned long long)a2;
- (BOOL)registerBtmPage:(id)a0 pageBtm:(id)a1 sourceBtmToken:(id)a2 bcm:(id)a3;
- (id)getVirtualSourceTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2 btmStandData:(id)a3;
- (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2 btmStandData:(id)a3;
- (void)setBcmPageParams:(id)a0 host:(id)a1 clearOldValue:(BOOL)a2 btmStandData:(id)a3;
- (id)getBcmChainForFantaPureFeatureWithExtraInfo:(id)a0 localLifeBcmChainConfig:(id)a1;
- (BOOL)isBTMAbcd:(id)a0;
- (id)getBtmAB:(id)a0;
- (id)getTopBtmPage;
- (id)getLocalLifeBcmGzipFlagWithExtraInfo:(id)a0 localLifeBcmChainConfig:(id)a1;
- (id)getLocalLifeCommonSourceTrace;
- (void)updateSourceTrace:(id)a0 pageParam:(id)a1 unitParam:(id)a2;
- (id)btmCompressWithBcmChain:(id)a0;
- (BOOL)isEnableBcmProviderPrefetchOpt;
- (BOOL)isEnableBcmProviderPreloadOpt;
- (id)parseStandBcmData:(id)a0 host:(id)a1 cdBtm:(id)a2;
- (BOOL)isBTMCd:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)currentPage;
- (void)dealloc;

@end
