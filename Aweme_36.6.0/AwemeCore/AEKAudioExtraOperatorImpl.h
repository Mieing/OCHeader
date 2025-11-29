@class NLETrack_OC, NSString, NSArray;
@protocol AEKAudioExtraData;

@interface AEKAudioExtraOperatorImpl : AEKBaseRenderEditor <AEKAudioExtraData, AEKAudioExtraOperator>

@property (retain, nonatomic) NLETrack_OC *track;
@property (readonly, nonatomic) BOOL isTTS;
@property (readonly, nonatomic) BOOL isAIWritingTTS;
@property (readonly, nonatomic) BOOL isPGCMusic;
@property (readonly, nonatomic) BOOL isUGCMusic;
@property (readonly, nonatomic) BOOL isPreset;
@property (readonly, copy, nonatomic) NSString *presetUUID;
@property (readonly, nonatomic) BOOL isCutSame;
@property (readonly, nonatomic) BOOL isUserEditAudio;
@property (readonly, nonatomic) BOOL isVoiceChanger;
@property (readonly, nonatomic) NSArray *extraDataDictsForSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKAudioExtraData> data;

- (id)setVoiceChanger:(BOOL)a0;
- (id)setUserEditAudio:(BOOL)a0;
- (id)initWithTrack:(id)a0 baseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3;
- (id)setTTS:(BOOL)a0;
- (id)setAIWritingTTS:(BOOL)a0;
- (id)setPresetUUID:(id)a0;
- (id)setUserEditAfterBingo:(BOOL)a0;
- (void).cxx_destruct;

@end
