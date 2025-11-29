@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface BDPAdFrequencyControlManager_HG : NSObject <BDPWarmBootMessage>

@property (nonatomic) unsigned long long adType;
@property (retain, nonatomic) NSMutableDictionary *frequencyData;
@property (retain, nonatomic) NSRecursiveLock *dataLock;
@property (nonatomic) BOOL enableFrequency;
@property (nonatomic) long long tempCloseTimes;
@property (nonatomic) long long tempFrequencyTime;
@property (nonatomic) long long permCloseTimes;
@property (nonatomic) long long permFrequencyTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)p_getBannerFrequencyConfig;
- (BOOL)useNewFrequencyControl;
- (void)setLastAdCloseTime:(double)a0 WithUniqueID:(id)a1;
- (BOOL)shouldShowAdForUniqueID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAdType:(unsigned long long)a0;

@end
