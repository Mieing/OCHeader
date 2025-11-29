@class NSString;
@protocol ACCMusicModelProtocol;

@interface APCDTOMusic : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCommercialScene;
@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (nonatomic) BOOL forbiddenMusicWhenImagePreferred;
@property (nonatomic) BOOL voiceVolumeDisable;
@property (nonatomic) long long strategy;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) double start;
@property (nonatomic) BOOL postDownload;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL needLoad;
@property (nonatomic) long long musicType;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) BOOL isImageBeat;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL showMusicCapsule;
@property (nonatomic) BOOL needAiClip;
@property (nonatomic) BOOL muteVoiceOnBgmAdd;
@property (copy, nonatomic) NSString *musicSelectedFrom;
@property (nonatomic) long long applyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicTypeJSONTransformer;
+ (id)applyTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)strategyJSONTransformer;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
