@class IESLivePerfSampleAnchor, IESLivePrefSampleEffectGift, NSString, IESLivePrefSampleAnrInfo, IESLivePrefSampleMemoryInfo, IESLivePrefSampleGpuInfo, IESLivePrefSamplePK, IESLivePrefSampleStallInfo, IESLivePrefSampleVideoGift, IESLivePrefSampleCommment, IESLivePrefSampleStallV2, IESLivePrefSampleGameStreamInfo, IESLivePrefSampleCpuInfo, IESLivePrefSampleLynxGift, IESLivePrefSampleBatteryInfo, NSNumber, IESLivePrefSampleStreamInfo, IESLivePrefSampleThermalInfo, IESLivePrefSampleNetInfo, IESLivePrefSampleSing;

@interface IESLivePrefSampleInfo : NSObject

@property (retain, nonatomic) IESLivePrefSampleCpuInfo *cpu;
@property (retain, nonatomic) IESLivePrefSampleMemoryInfo *pss;
@property (retain, nonatomic) IESLivePrefSampleStreamInfo *stream;
@property (retain, nonatomic) IESLivePrefSampleThermalInfo *thermal;
@property (retain, nonatomic) IESLivePrefSampleBatteryInfo *battery;
@property (retain, nonatomic) IESLivePrefSampleNetInfo *net;
@property (retain, nonatomic) IESLivePrefSampleGpuInfo *gpu;
@property (retain, nonatomic) IESLivePrefSampleAnrInfo *anr;
@property (retain, nonatomic) IESLivePrefSampleGameStreamInfo *game_stream;
@property (retain, nonatomic) IESLivePrefSampleStallInfo *stall_info;
@property (retain, nonatomic) IESLivePrefSampleVideoGift *videoGift;
@property (retain, nonatomic) IESLivePrefSampleEffectGift *effectGift;
@property (retain, nonatomic) IESLivePrefSampleLynxGift *lynxGift;
@property (retain, nonatomic) IESLivePrefSampleCommment *comment;
@property (retain, nonatomic) IESLivePrefSamplePK *pk;
@property (retain, nonatomic) IESLivePrefSampleSing *sing;
@property (retain, nonatomic) IESLivePrefSampleStallV2 *stallV2;
@property (retain, nonatomic) IESLivePerfSampleAnchor *anchorPreviewFps;
@property (retain, nonatomic) NSNumber *generateTime;
@property (copy, nonatomic) NSString *monitor_trigger;
@property (nonatomic) BOOL skipFreq;

- (id)toDictinaryV2;
- (void).cxx_destruct;
- (BOOL)hasInfo:(unsigned int)a0;

@end
