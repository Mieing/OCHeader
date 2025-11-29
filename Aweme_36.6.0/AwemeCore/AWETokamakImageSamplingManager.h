@class NSDictionary, NSArray;

@interface AWETokamakImageSamplingManager : NSObject

@property (nonatomic) unsigned long long strategy;
@property (nonatomic) unsigned long long maxFootprintFactor;
@property (nonatomic) double imageDownSampleRate;
@property (nonatomic) unsigned long long remainMemoryStrategy;
@property (nonatomic) unsigned long long hugeBitmapDefine;
@property (nonatomic) unsigned long long minBitmapDefine;
@property (nonatomic) unsigned long long shouldNotDecodeMemoryPeak;
@property (copy, nonatomic) NSDictionary *peakDic;
@property (nonatomic) unsigned long long notZoomableDownSampleStrategy;
@property (nonatomic) unsigned long long findSuperViewLoopCount;
@property (nonatomic) unsigned long long hitBitmapSize;
@property (nonatomic) double notZoomWidthRadio;
@property (nonatomic) double notSupportFormatMaxUsageRate;
@property (nonatomic) double maxWidthFactor;
@property (nonatomic) double maxHeightFactor;
@property (nonatomic) double whRadio;
@property (nonatomic) double lsRadioDefine;
@property (nonatomic) BOOL enableDynamic;
@property (copy, nonatomic) NSArray *widthFactorArr;
@property (copy, nonatomic) NSArray *heightFactorArr;
@property (nonatomic) unsigned long long memLevel;
@property (nonatomic) unsigned long long samplingOption;

+ (id)shared;

- (id)imageDownSampleStrategy:(id)a0;
- (unsigned long long)getCapacity;
- (unsigned long long)getAvailableMemory;
- (BOOL)easyZoomAble:(id)a0;
- (unsigned long long)getSafeMemoryLimitFromFactor:(unsigned long long)a0 imagePeakMemoryUsage:(unsigned long long)a1 targetMemory:(unsigned long long)a2;
- (void).cxx_destruct;

@end
