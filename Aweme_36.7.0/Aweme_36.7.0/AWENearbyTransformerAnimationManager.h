@class NSArray, AWENearbySettingsResponse;

@interface AWENearbyTransformerAnimationManager : NSObject

@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSArray *iconURLModels;
@property (retain, nonatomic) AWENearbySettingsResponse *settingsResponse;
@property (copy, nonatomic) NSArray *iconFrameArray;
@property (nonatomic) double beginTime;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)trackAnimationInteruptBySwitchTab;
- (void)trackAnimationInteruptByCloseTransformer;
- (void)trackAnimationInteruptByUpdate;
- (BOOL)canShowTransformerGuideAnimation;
- (void)trackAnimationBegin;
- (void)recordShowTransformerGuideAnimation;
- (void)trackAnimationEnd;
- (void)trackAnimationWithoutIconFrame;
- (void)updateIconLayoutInfo:(id)a0;
- (void)updateIconURLModelsWithSettingsResponse:(id)a0;
- (id)__transformerAnimationGuideSettings;
- (long long)__times;
- (long long)__period;
- (long long)__everyDayTimes;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
