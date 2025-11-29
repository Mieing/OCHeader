@class NSString, AWESiriTopHitConfigModel;

@interface AWESiriTopHitDataCenter : NSObject <AWEDonateDataParseProtocol, AWEDeepLinkWorkFlowServiceDelegate>

@property (copy, nonatomic) NSString *advertisingGDLabel;
@property (retain, nonatomic) AWESiriTopHitConfigModel *modelFromABTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (void)trackTopHitDonationDataAcquired:(id)a0 donationTiming:(unsigned long long)a1;
+ (BOOL)shouldUpdateTopHitEntrance:(unsigned long long)a0 forceRefresh:(BOOL)a1;
+ (void)storeSpotlightTopQueryDataIfNeeded:(id)a0;
+ (void)updateData:(id)a0 forKey:(id)a1 donationTiming:(unsigned long long)a2;
+ (id)injectRequestQueryBizParams;
+ (void)handleFullResponseDataWithTiming:(unsigned long long)a0 fullResponseData:(id)a1;
+ (id)sharedInstance;

- (void)notifyPreLoadTaskExecute:(id)a0;
- (void)triggerTopHitConfigDataFetchWithTiming:(long long)a0;
- (void)requestDataWithTiming:(long long)a0;
- (id)acquireTopHitSettings;
- (void).cxx_destruct;
- (id)init;

@end
