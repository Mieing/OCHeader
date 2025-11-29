@class NSString, IESEffectModel, ACCRecognitionGrootModel;

@interface ACCRecognitionTrackModel : NSObject <AWERepositoryDraftProtocol, ACCRepoRegister, ACCRepositoryTrackContextDeprecated, ACCRecognitionTrackData, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *realityId;
@property (copy, nonatomic) NSString *realityType;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long begin;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) long long propIndex;
@property (nonatomic) long long speciesIndex;
@property (nonatomic) BOOL isClickByGroot;
@property (nonatomic) long long failedStage;
@property (retain, nonatomic) IESEffectModel *effect;
@property (retain, nonatomic) ACCRecognitionGrootModel *grootModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (BOOL)isWikiType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
