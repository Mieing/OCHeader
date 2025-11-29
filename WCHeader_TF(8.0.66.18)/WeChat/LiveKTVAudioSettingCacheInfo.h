@class NSString;

@interface LiveKTVAudioSettingCacheInfo : NSObject <PBCoding>

@property (nonatomic) int volumeBGM;
@property (nonatomic) int volumeVoice;
@property (nonatomic) int pitchBGM;
@property (nonatomic) int bgmChnlId;
@property (nonatomic) unsigned int reverbType;
@property (nonatomic) BOOL voiceEarEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_volumeBGM;
+ (void)PBArrayAdd_volumeVoice;
+ (void)PBArrayAdd_pitchBGM;
+ (void)PBArrayAdd_bgmChnlId;
+ (void)PBArrayAdd_reverbType;
+ (void)PBArrayAdd_voiceEarEnabled;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
