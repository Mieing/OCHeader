@class NSMutableDictionary, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface AWEGetDonateDataServiceImpl : HTSService <AWEGetDonateDataService>

@property (retain, nonatomic) NSMutableDictionary *businessSettingsClassDict;
@property (retain, nonatomic) NSDate *lastSpotlightDataRequestTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerParseProtocol:(Class)a0 forParseKey:(id)a1;
- (void)requestDonateDataWithScene:(unsigned long long)a0 timingType:(unsigned long long)a1 businessRequestParams:(id)a2 completion:(id /* block */)a3;
- (id)sceneStringFrom:(unsigned long long)a0;
- (id)buildRequestParams:(id)a0 timingType:(unsigned long long)a1 bizParams:(id)a2;
- (id)queryStringFromParams:(id)a0 timingType:(unsigned long long)a1 bizParams:(id)a2;
- (void)trackPostGetDonationDataRequest:(id)a0 params:(id)a1;
- (id)filterGetDonationDataSceneStrings:(id)a0;
- (BOOL)enableSpotlightDonationRequest;
- (id)timingStringFrom:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
