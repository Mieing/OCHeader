@class NSString, NSArray;

@interface AWERepoVoiceChangerModel : NSObject <AWERepositoryDraftProtocol, NSCopying, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepoRegister, ACCRepoVoiceChangerData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *voiceChangerID;
@property (copy, nonatomic) NSString *voiceChangeSource;
@property (copy, nonatomic) NSString *voiceChangerChallengeID;
@property (copy, nonatomic) NSString *voiceChangerChallengeName;
@property (nonatomic) BOOL isVCEffect;
@property (copy, nonatomic) NSString *vcSpeakerID;
@property (copy, nonatomic) NSArray *currentVCAssets;
@property (copy, nonatomic) NSArray *currentVCRanges;
@property (retain, nonatomic) NSArray *voiceEffectSegments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)voiceEffectIDs;
- (long long)voiceEffectType;
- (void)clearVoiceEffect;
- (id)voiceChangerTrackInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToObject:(id)a0;

@end
