@class NSString, NSURL, NSData, NSNumber, UIImage;
@protocol ACCPublishRepository, ACCAwemeModelProtocol;

@interface AWERepoDuetModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepositoryReeditContextProtocol, ACCRepoRegister, NSCopying, ACCRepoDuetData, ACCRepositoryTrackContextDeprecated, ACCRepositoryContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *sourceAwemeID;
@property (nonatomic) BOOL isDuet;
@property (retain, nonatomic) id<ACCAwemeModelProtocol> duetSource;
@property (retain, nonatomic) NSURL *duetLocalSourceURL;
@property (nonatomic) long long furthestStep;
@property (copy, nonatomic) NSString *duetLayout;
@property (nonatomic) long long duetOrCommentChainlength;
@property (retain, nonatomic) NSData *duetSourceAwemeJSON;
@property (retain, nonatomic) NSString *duetSourceVideoFilename;
@property (nonatomic) long long materialMediaType;
@property (nonatomic) long long uploadMediaType;
@property (nonatomic) BOOL hasSticker;
@property (nonatomic) BOOL hasChallenge;
@property (nonatomic) BOOL shouldShowDuetGreenScreenAlert;
@property (copy, nonatomic) NSString *duetOriginID;
@property (copy, nonatomic) NSString *duetGroupID;
@property (copy, nonatomic) NSNumber *duetGroupDuration;
@property (nonatomic) BOOL shouldEnableMicrophoneOnStart;
@property (nonatomic) BOOL isDuetSing;
@property (nonatomic) BOOL isFromDuetSingTab;
@property (readonly, nonatomic) NSString *duetIdentifierText;
@property (nonatomic) long long duetOriginAwemeType;
@property (copy, nonatomic) NSString *originDuetResourceURI;
@property (nonatomic) long long trackDuetUploadDurationMS;
@property (copy, nonatomic) NSString *chorusMethod;
@property (nonatomic) BOOL useRecommendVolume;
@property (nonatomic) double bgmVolume;
@property (nonatomic) double vocalVolume;
@property (nonatomic) double vocalAlign;
@property (copy, nonatomic) NSString *soundEffectID;
@property (copy, nonatomic) NSString *duetSingTuningJSON;
@property (copy, nonatomic) NSString *duetLayoutMessage;
@property (nonatomic) BOOL isDuetUpload;
@property (nonatomic) long long duetUploadType;
@property (nonatomic) BOOL videoDescribeContainsSingWord;
@property (nonatomic) BOOL supportHotSwitch;
@property (nonatomic) unsigned long long defaultMode;
@property (copy, nonatomic) NSString *mainMusicId;
@property (retain, nonatomic) UIImage *mainTrackCover;
@property (retain, nonatomic) UIImage *subTrackCover;
@property (nonatomic) BOOL cameraControlDuetOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)challengeIDs;
- (id)challengeNames;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)updateFromAweme:(id)a0;
- (BOOL)isImageAlbumDuet;
- (id)acc_referExtraParams;
- (id)acc_publishTrackEventParams:(id)a0;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (BOOL)isOldDuet;
- (BOOL)checkExtra:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
