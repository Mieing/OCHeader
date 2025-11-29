@class MemoryMappedKV, NSString;

@interface VideoRingDataBase : NSObject

@property (retain, nonatomic) MemoryMappedKV *soundsFileKVMap;
@property (retain, nonatomic) MemoryMappedKV *defaultKVMap;
@property (nonatomic) BOOL firstSetRingTone;
@property (nonatomic) unsigned long long lastGlobalRingNotificationFileIdentifer;
@property (nonatomic) BOOL cachedShouldShowRingBackSwitch;
@property (nonatomic) float ringToneVolume;
@property (nonatomic) float ringBackVolume;
@property (copy, nonatomic) NSString *globalRingName;
@property (nonatomic) unsigned int vibrateFileVersion;

- (id)getSoundsFileForFriend:(id)a0;
- (void)setSoundsFile:(id)a0 forUser:(id)a1;
- (id)getLatestListendRingBackIDForFriend:(id)a0;
- (void)setLatestListendRingBackID:(id)a0 forUser:(id)a1;
- (BOOL)hasAnyExclusiveRing;
- (void).cxx_destruct;

@end
