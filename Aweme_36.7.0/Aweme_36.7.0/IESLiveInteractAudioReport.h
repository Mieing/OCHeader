@class NSMutableArray, IESLiveInteractAudioReportConfig, IESLiveInteractAudioReportCalculator;

@interface IESLiveInteractAudioReport : NSObject

@property (retain, nonatomic) IESLiveInteractAudioReportConfig *config;
@property (retain, nonatomic) IESLiveInteractAudioReportCalculator *calculator;
@property (nonatomic) unsigned long long threshold;
@property (nonatomic) BOOL enableFallDown;
@property (nonatomic) unsigned long long fallDownCount;
@property (nonatomic) unsigned long long lowDefaultValue;
@property (nonatomic) unsigned long long defaultHighValue;
@property (retain, nonatomic) NSMutableArray *volumeArray;
@property (retain, nonatomic) NSMutableArray *lastSpeakState;
@property (nonatomic) BOOL lastReturnState;

- (unsigned long long)speakStateWithVolume:(unsigned long long)a0;
- (void)lowDefaultHighValueConfigHelper:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
