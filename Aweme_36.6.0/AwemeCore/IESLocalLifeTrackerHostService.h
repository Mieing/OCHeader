@class NSString;

@interface IESLocalLifeTrackerHostService : HTSService <IESLocalLifeTrackerHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackEvent:(id)a0 withParams:(id)a1;
+ (BOOL)isBtmValid;
+ (id)createBtmChainWithBtmInfo:(id)a0 clickedView:(id)a1 enterNewPage:(BOOL)a2 addBtmChain:(BOOL)a3 chainLength:(long long)a4 targetPages:(id)a5;
+ (id)getCurrentPage;
+ (void)appendBcmPageParams:(id)a0 forKey:(id)a1 responder:(id)a2;
+ (void)trackEvent:(id)a0 label:(id)a1 value:(id)a2 extra:(id)a3 attributes:(id)a4;

- (void)forwardToCustomPage:(id)a0;
- (id)createBtmChainWithBtmInfo:(id)a0 clickedView:(id)a1 enterNewPage:(BOOL)a2 addBtmChain:(BOOL)a3 chainLength:(long long)a4 targetPages:(id)a5;
- (id)getBTMPageInfo:(id)a0;
- (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2;
- (BOOL)registerBtmPage:(id)a0 pageBtm:(id)a1 sourceBtmToken:(id)a2;
- (BOOL)updateBtmPage:(id)a0 sourceBtmToken:(id)a1;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1 options:(id)a2;
- (void)trackEvent:(id)a0 params:(id)a1 btm:(id)a2 host:(id)a3;
- (void)setBcmPageParams:(id)a0 host:(id)a1 clearOldValue:(BOOL)a2;
- (id)getBcmChainWithHost:(id)a0 chainLength:(unsigned long long)a1 isDomainStandard:(BOOL)a2;

@end
