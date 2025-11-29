@class NSString;

@interface AWELiveBtmServiceIMP : NSObject <IESLiveBTMService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)registerBtmPage:(id)a0 params:(id /* block */)a1;
- (void)forwardToCustomPage:(id)a0;
- (void)returnFromCustomPage:(id)a0;
- (id)createBtmChainWithBtmInfo:(id)a0 clickedView:(id)a1 enterNewPage:(BOOL)a2 addBtmChain:(BOOL)a3 chainLength:(long long)a4 targetPages:(id)a5;
- (id)getCurrentPage;
- (id)preBtmIdIfNeedAppendFrom:(id)a0 fromBtm:(id)a1 to:(id)a2 targetPages:(id)a3 bcmDes:(id)a4;
- (void)setBcmPageParams:(id)a0 forKey:(id)a1 responder:(id)a2;
- (void)appendBcmPageParams:(id)a0 forKey:(id)a1 responder:(id)a2;
- (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2;
- (BOOL)registerBtmPage:(id)a0 pageBtm:(unsigned long long)a1 sourceBtmToken:(id)a2;
- (BOOL)updateBtmPage:(id)a0 sourceBtmToken:(id)a1;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1;
- (BOOL)setBcmPageParams:(id)a0 host:(id)a1 clearOldValue:(BOOL)a2;
- (id)getBcmChainWithHost:(id)a0 chainLength:(unsigned long long)a1;
- (id)btmSdkConfigSettings;
- (BOOL)btmUseV2Api;
- (BOOL)enableJsbCreateSourceBtmToken;
- (id)appendEventParams:(id)a0 responder:(id)a1;
- (id)appendEntranceInfoWithString:(id)a0 responder:(id)a1;
- (id)appendEntranceInfoWithDictionary:(id)a0 responder:(id)a1;
- (id)extraParamsForEvent:(id)a0 params:(id)a1 responder:(id)a2;
- (void)setCurrentPage:(id)a0 BtmAutoManaged:(BOOL)a1;
- (void)setBtmPageIdentifier:(unsigned long long)a0 WithView:(id)a1 index:(unsigned long long)a2;
- (id)btmInfoWithSource:(unsigned long long)a0 index:(unsigned long long)a1;
- (id)douyinBTMIDWithSource:(unsigned long long)a0 index:(unsigned long long)a1;
- (id)p_convertBCMChainToRecentBtm:(id)a0;
- (id)currentBTMPageIdentifierWithResponder:(id)a0;
- (id)createBtmWithModel:(id)a0;
- (void)btmNotPageHoldWithView:(id)a0;
- (void)setBtmPageIdentifier:(unsigned long long)a0 WithView:(id)a1;
- (void)setBcmPageParams:(id)a0 responder:(id)a1;
- (void)appendBcmPageParams:(id)a0 responder:(id)a1;
- (void)setBcmUnitParams:(id)a0 responder:(id)a1;
- (void)appendBcmUnitParams:(id)a0 responder:(id)a1;
- (id)getBTMParamsWhenShowOrPlay;
- (void)appendTrackerBtmParamsWithOriginParams:(id)a0 btm:(id)a1 host:(id)a2;

@end
