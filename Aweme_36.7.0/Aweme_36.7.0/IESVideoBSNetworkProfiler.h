@class IESVideoBSObjectPool, IESVideoBSLinkedList, NSDictionary;
@protocol IESVideoBSNetworkProfilerProtocol, IESVideoBSNetworkDelegateProtocol;

@interface IESVideoBSNetworkProfiler : NSObject

@property (retain, nonatomic) IESVideoBSObjectPool *pool;
@property (retain, nonatomic) IESVideoBSLinkedList *sampleList;
@property (nonatomic) unsigned long long weight;
@property (nonatomic) unsigned long long profilerType;
@property (weak, nonatomic) id<IESVideoBSNetworkProfilerProtocol> speedPredictDelegate;
@property (weak, nonatomic) id<IESVideoBSNetworkDelegateProtocol> networkDelegate;
@property (nonatomic) unsigned long long maxBufferSize;
@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) float minRangeRobustFactor;
@property (nonatomic) float maxRangeRobustFactor;
@property (nonatomic) float defaultRangeRobustFactor;
@property (nonatomic) unsigned long long roughRTTms;
@property (nonatomic) unsigned long long adjRangeSizeBytes;
@property (nonatomic) unsigned long long queueCapacity;

+ (void)setSpeedPredictDelegate:(id)a0;
+ (unsigned long long)_weightMin;
+ (void)setStartUpType:(long long)a0;
+ (void)sampleWithDataLength:(unsigned long long)a0 interval:(double)a1;
+ (unsigned long long)latestBitrateSample;
+ (void)setNetworkSpeedMonitorType:(unsigned long long)a0;
+ (void)setNetworkSpeedConfig:(id)a0;
+ (void)setProfilerMaxBufferSize:(unsigned long long)a0;
+ (id)sharedInstance;
+ (unsigned long long)bitrate;
+ (void)setNetworkDelegate:(id)a0;

- (void)_sampleWithDataLength:(unsigned long long)a0 interval:(double)a1;
- (void)_sampeWithDataLengthV1:(unsigned long long)a0 interval:(double)a1;
- (void)_sampeWithDataLengthV2:(unsigned long long)a0 interval:(double)a1;
- (unsigned long long)_bitrateFromDelegate;
- (unsigned long long)_bitrateFromPredict;
- (unsigned long long)getLatestBitrateSample;
- (float)calRangeSizeRobustFactorWithOri:(unsigned long long)a0 sampleArray:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_bitrate;

@end
