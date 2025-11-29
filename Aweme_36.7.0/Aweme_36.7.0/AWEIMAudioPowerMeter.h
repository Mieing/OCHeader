@class NSArray, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMAudioPowerMeter : NSObject <AWEIMAudioBufferProcessor>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSArray *innerLevels;
@property (readonly, nonatomic) NSArray *levels;
@property (nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)channelLevelsForChannel:(unsigned long long)a0 inLevelList:(id)a1;

- (void)stopRecord;
- (void)startRecord;
- (void)processWithBuffer:(id)a0;
- (void)processSilence;
- (id)p_calculatePowersWithData:(const float *)a0 strideFrames:(unsigned long long)a1 length:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
