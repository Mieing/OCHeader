@class AWEDTOClipRangeEntry, NSString, NSDictionary, AWEDTOMusicTraceData, AWEDTOMusicTrimData, AWEDTOMusicVolumeModel, AWEDTOMusicClipData;
@protocol ACCMusicModelProtocol;

@interface AWEDTOMusicModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (copy, nonatomic) NSString *selectedFrom;
@property (nonatomic) long long recordMusicFrom;
@property (retain, nonatomic) AWEDTOMusicClipData *bgmClipRange;
@property (nonatomic) double musicVolume;
@property (nonatomic) BOOL enableMusicLoop;
@property (copy, nonatomic) NSString *editMusicFrom;
@property (nonatomic) long long musicType;
@property (copy, nonatomic) NSString *strongBeatPath;
@property (nonatomic) double voiceVolume;
@property (nonatomic) BOOL isLvAudioFrameModel;
@property (nonatomic) BOOL useSuggestClipRange;
@property (retain, nonatomic) AWEDTOClipRangeEntry *clipRange;
@property (copy, nonatomic) NSString *bgmFile;
@property (retain, nonatomic) AWEDTOMusicTraceData *trace;
@property (nonatomic) BOOL voiceVolumeDisable;
@property (copy, nonatomic) NSString *importMusicId;
@property (nonatomic) BOOL disableMusicModule;
@property (nonatomic) BOOL useWholeMusic;
@property (nonatomic) BOOL hitAudioRangeChangeTestInImageAlbum;
@property (nonatomic) BOOL hitVolumeChangeTestInImageAlbum;
@property (nonatomic) BOOL enableEditPageMusicLoop;
@property (nonatomic) BOOL postDownload;
@property (nonatomic) BOOL showMusicCapsule;
@property (nonatomic) BOOL needAiClip;
@property (copy, nonatomic) NSString *similarMusicId;
@property (copy, nonatomic) NSDictionary *musicTrackInfo;
@property (copy, nonatomic) NSString *binUri;
@property (retain, nonatomic) AWEDTOMusicTrimData *musicTrimData;
@property (retain, nonatomic) AWEDTOMusicVolumeModel *volumeModel;
@property (nonatomic) BOOL muteVoiceOnBgmAdd;
@property (nonatomic) BOOL beatsOn;
@property (nonatomic) BOOL reservedBeatsOn;
@property (nonatomic) BOOL hasEditVoice;
@property (copy, nonatomic) NSString *offlineMusicId;
@property (copy, nonatomic) NSString *offlineMusicName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgmClipRangeJSONTransformer;
+ (id)traceJSONTransformer;
+ (id)musicTrimDataJSONTransformer;
+ (id)volumeModelJSONTransformer;
+ (id)clipRangeJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
