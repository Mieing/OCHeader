@class NSArray, NSDictionary, NSString, AWEECBcmNetworkChecker, NSObject;
@protocol OS_dispatch_queue;

@interface AWEECBcmTracker : NSObject <IESGurdEventDelegate>

@property (retain) AWEECBcmNetworkChecker *checker;
@property (copy, nonatomic) NSDictionary *bcmConfigDict;
@property (copy, nonatomic) NSArray *trackerList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (id)gurdAccessKey;
- (id)appendEventParams:(id)a0 responder:(id)a1;
- (id)appendEntranceInfoWithString:(id)a0 responder:(id)a1 scene:(id)a2;
- (id)appendEntranceInfoWithDictionary:(id)a0 responder:(id)a1 scene:(id)a2;
- (id)appendEntranceInfoWhenCartAddWithString:(id)a0 btmModel:(id)a1;
- (id)appendEntranceInfoWhenCartAddWithDictionary:(id)a0 btmModel:(id)a1;
- (id)appendEntranceInfoWhenCartAddWithString:(id)a0 sourceBtmToken:(id)a1;
- (id)appendEntranceInfoWhenCartAddWithDictionary:(id)a0 sourceBtmToken:(id)a1;
- (id)appendEntranceInfoWhenBuyNowWithString:(id)a0 sourceBtmToken:(id)a1;
- (id)appendEntranceInfoWhenBuyNowWithDictionary:(id)a0 sourceBtmToken:(id)a1;
- (id)extraParamsForEvent:(id)a0 params:(id)a1 responder:(id)a2;
- (id)getBcmChainWhenBuyNowWithResponder:(id)a0;
- (id)getBcmInfoForGlobalProps:(id)a0 query:(id)a1 responder:(id)a2;
- (id)getBcmChainForGlobalPropsScheme:(id)a0 query:(id)a1 responder:(id)a2;
- (id)getBcmChainWhenCartAddWithBtmModel:(id)a0;
- (id)getBcmChainWhenBuyNowWithSourceBtmToken:(id)a0;
- (id)getBcmChainWhenCartAddWithSourceBtmToken:(id)a0;
- (void)checkEntranceInfoSize:(id)a0;
- (id)removeEntranceInfoKeys:(id)a0;
- (void)getConfigFromGecko;
- (id)updateBtmList:(id)a0 withBtm:(id)a1 pageId:(id)a2;
- (void)updateBcmInfo:(id)a0 entranceInfoDict:(id)a1;
- (id)getEntranceModel:(id)a0 btmTrackerModel:(id)a1 scene:(id)a2;
- (id)getBcmChainForOrderWithSourceBtmToken:(id)a0;
- (id)getBcmChainForOrderWithModel:(id)a0;
- (long long)getStringValueLength:(id)a0;
- (id)getBcmChainWhenBuyNowWithBtmModel:(id)a0;
- (void).cxx_destruct;

@end
