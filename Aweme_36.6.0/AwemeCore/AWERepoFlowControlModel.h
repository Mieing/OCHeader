@class NSString, ACCEditorControlConfigAssembler, ACCCountDownTrackParamsModel;
@protocol ACCPublishRepository;

@interface AWERepoFlowControlModel : NSObject <AWERepositoryDraftProtocol, ACCRepoRegister, ACCRepositoryRequestParamsDeprecated, NSCopying, ACCRepoFlowControlData, ACCRepositoryContextDeprecated, ACCRepositoryTrackContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long step;
@property (nonatomic) BOOL disableBackToTabBar;
@property (nonatomic) BOOL hasRecoveredAudioFragments;
@property (nonatomic) long long videoRecordButtonType;
@property (nonatomic) BOOL showOneTabExclusively;
@property (copy, nonatomic) NSString *exclusiveRecordType;
@property (readonly, nonatomic) long long exclusiveRecordModeId;
@property (nonatomic) long long modeId;
@property (nonatomic) unsigned long long LVHasRecoverFlag;
@property (nonatomic) long long enterFromType;
@property (nonatomic) BOOL autoShoot;
@property (nonatomic) BOOL isShowingHalfScreenAlbum;
@property (nonatomic) BOOL isSpecialPlusButton;
@property (nonatomic) BOOL isRecordTabInStream4_3;
@property (retain, nonatomic) ACCEditorControlConfigAssembler *flowControlConfigAssembler;
@property (retain, nonatomic) ACCCountDownTrackParamsModel *countdownTrackPramas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_publishTrackEventParams:(id)a0;
- (long long)recordModeId;
- (BOOL)isFixedDuration;
- (BOOL)isSegment;
- (id)allFragmentsCountDownTrackData;
- (id)singleRecordCountDownTrackData;
- (void)cleanCountDownState;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
