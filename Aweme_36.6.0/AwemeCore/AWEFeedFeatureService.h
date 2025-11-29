@class AWEFeedFeatureCollector, NSMutableArray, NSString;

@interface AWEFeedFeatureService : HTSService <AWEFeedFeatureService, AWEFeatureHandlerProtocol>

@property (nonatomic) BOOL fixArrayCrash;
@property (retain, nonatomic) AWEFeedFeatureCollector *featureCollector;
@property (retain, nonatomic) NSMutableArray *featureSequenceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)logUserAction:(long long)a0 withModel:(id)a1;
- (void)addFeedFeatureProvider:(id)a0;
- (void)removeFeedFeatureProvider:(id)a0;
- (id)featureForKey:(id)a0 extra:(id)a1;
- (id)searchFeature;
- (id)sequenceFeatureUploadForRequest:(unsigned long long)a0;
- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (void)createSequenceItemIfNeeded:(id)a0 forFeatureSequence:(id)a1 extraInfo:(id)a2;
- (void)createFeatureSequence;
- (void)addFeatureSequence:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
