@class NSString;

@interface TingAudioQualityServiceCpp : UnitRCObjcBaseProxyClass <TingAudioQualityService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (int)getCurPlayingAudioQuality:(id)a0;
- (id)getCurPlayingSupportAudioQualityList:(id)a0;
- (void)setManualPreferredAudioQuality:(int)a0;
- (void)setEnableSqQualityBySetting:(BOOL)a0;
- (void)clear;

@end
