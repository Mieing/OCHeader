@class NSSet, NSDictionary, IESTimeFeatureUtils, NSMutableArray;

@interface IESPhoneFeatures : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) BOOL enableTouchTrack;
@property (retain, nonatomic) Class IESFeatureRegionUtilsCls;
@property (retain, nonatomic) NSSet *subtypes;
@property (retain, nonatomic) IESTimeFeatureUtils *timeUtils;
@property (retain, nonatomic) NSDictionary *featureGetters;
@property (retain, nonatomic) NSMutableArray *historyPageList;
@property (retain, nonatomic) NSMutableArray *historyPageTime;

+ (id)getRegion;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (id /* block */)makeValueGetter:(id /* block */)a0;
- (BOOL)batteryIsCharing;
- (void)addSubtype:(id)a0;
- (double)currentBatteryUsage;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
