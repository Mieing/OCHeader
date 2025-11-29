@class NSDictionary;
@protocol AWEClientAIUIBlockInterface;

@interface IESTimeSeriesFeatures : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSDictionary *featureGetters;
@property (retain, nonatomic) id<AWEClientAIUIBlockInterface> UIBlockHelper;

- (id /* block */)makeValueGetter:(id /* block */)a0;
- (BOOL)batteryIsCharing;
- (double)currentBatteryUsage;
- (id)collectFeature;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
