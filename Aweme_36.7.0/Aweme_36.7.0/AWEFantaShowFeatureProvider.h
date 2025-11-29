@class AWEShowFantaInsertADFeature, NSString, AWEShowFantaSeriesFeatureGroup, NSObject, AWEShowFantaExtraFeature;
@protocol OS_dispatch_queue;

@interface AWEFantaShowFeatureProvider : NSObject <FantaFeatureProvider, FantaDataCollectorListener>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AWEShowFantaInsertADFeature *insertADFeatureSequence;
@property (retain, nonatomic) AWEShowFantaExtraFeature *extraFeatureSequence;
@property (retain, nonatomic) AWEShowFantaSeriesFeatureGroup *seriesFeatureSequenceGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (id)featureForKey:(id)a0;
- (void)handleAppLogCollectData:(id)a0;
- (void)handleUserAct2CollectData:(id)a0;
- (void)handleGokuCollectData:(id)a0;
- (void)handleNotificationCollectData:(id)a0;
- (id)safeReadFeatureValue:(id /* block */)a0;
- (BOOL)isValidEventWithAppLogCollectData:(id)a0;
- (id)getEnterfromFromParams:(id)a0;
- (id)getPlayletIDFromParams:(id)a0;
- (void)safeWriteFeatureValue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
