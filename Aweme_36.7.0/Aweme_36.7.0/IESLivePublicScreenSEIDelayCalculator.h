@class NSString, NSMutableArray;

@interface IESLivePublicScreenSEIDelayCalculator : NSObject <IESLiveSEIListener>

@property (nonatomic) double seiDelayMaxValue;
@property (nonatomic) double seiDelayMinValue;
@property (retain, nonatomic) NSMutableArray *seiDelayTimeArray;
@property (nonatomic) double curEffectiveSEIDelayAvg;
@property (nonatomic) long long receivedEffectiveSEICount;
@property (nonatomic) long long ntpDiffTimeMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)setupSettings;
- (void)calculateSEIAvgDelayWithCurDelayTime:(double)a0;
- (void).cxx_destruct;

@end
