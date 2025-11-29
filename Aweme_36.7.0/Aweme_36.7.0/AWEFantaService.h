@class NSString;

@interface AWEFantaService : HTSService <AWEFantaService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerUserAction2:(unsigned long long)a0 forAwemeItem:(id)a1;
- (void)fantaFeatureInfoUpdateWith:(id)a0 info:(id)a1;
- (void)updateSSHomepageWithParams:(id)a0;
- (id)getSequenceFeatureRawDataWithMaxSearchIDCount:(long long)a0 maxRequestIDCount:(long long)a1;
- (void)registerDataCollectors;
- (void)registerFeatureSequences;
- (void)registerFeatureProducers;
- (BOOL)isFirstRequest:(id)a0;
- (BOOL)isFirstRequestV2:(id)a0;
- (void)onFantaServiceLaunch;
- (id)featureSequenceForUploadChannel:(unsigned long long)a0 requestContext:(id)a1;
- (void)triggerUserAction:(unsigned long long)a0 forAwemeItem:(id)a1;
- (void)triggerTujiAction:(unsigned long long)a0 forAwemeItem:(id)a1;

@end
