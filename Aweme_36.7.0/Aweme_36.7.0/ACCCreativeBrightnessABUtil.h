@class NSNumber, NSTimer;

@interface ACCCreativeBrightnessABUtil : NSObject

@property (retain, nonatomic) NSNumber *originalSystemBrightness;
@property (retain, nonatomic) NSNumber *recentCreativeBrightness;
@property (retain, nonatomic) NSNumber *currentBrightness;
@property (nonatomic) BOOL hasChangedOriginalValue;
@property (nonatomic) BOOL brightnessABSwitch;
@property (nonatomic) BOOL enableAdjustBrightness;
@property (nonatomic) double lowLevelAdjustRange;
@property (nonatomic) double highLevelAdjustRange;
@property (nonatomic) double lowLevelAdjustGap;
@property (nonatomic) double highLevelAdjustGap;
@property (nonatomic) double ratioInEdit;
@property (nonatomic) double ratioInPublish;
@property (retain, nonatomic) NSTimer *timer;

+ (id)shareBrightnessManager;

- (void)enterBackground:(id)a0;
- (void)enterForeground:(id)a0;
- (void)updateABValue;
- (void)changeBrightnessWithRatio:(double)a0;
- (void)logWithInfo:(id)a0;
- (void)exitCreative;
- (void)realChangeBrightness:(double)a0;
- (void)brightnessDidChange:(id)a0;
- (void)enterCreative;
- (BOOL)shouldChangeBrightnessInCreative;
- (BOOL)brightnessValueValid:(double)a0;
- (void)adjustBrightnessWhenEnterCreationLine;
- (void)resumeBrightnessWhenEnterEditor;
- (void)resumeBrightnessWhenEnterPublish;
- (void)restoreBrightness;
- (void).cxx_destruct;
- (id)init;

@end
