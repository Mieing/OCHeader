@class NSString;

@interface TingAudioExptServiceCpp : UnitRCObjcBaseProxyClass <TingAudioExptService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceForAudioRadio;

- (void)initOrReload;
- (void)debugSettingValue:(id)a0 value:(id)a1;
- (void)debugSettingClear;
- (BOOL)enableAudioRadioSquare;
- (BOOL)enableChannel2DTo1D;
- (BOOL)enableTopLines;
- (BOOL)tingAudioSquareRemove;
- (int)enableRadioTopLineTitle;
- (int)topLinePlayStrategy;
- (int)enableBannerMode;
- (id)getBaseRequest;

@end
