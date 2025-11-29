@class NSString, IESEffectModel;

@interface AWERepoInspirationModel : NSObject <NSCopying, ACCRepoRegister, ACCRepoModelDraftProtocol, AWERepoInspirationData, ACCRepositoryTrackContextDeprecated>

@property (nonatomic) BOOL enterInspirationShootSame;
@property (retain, nonatomic) IESEffectModel *lastApplyEffectModel;
@property (copy, nonatomic) NSString *materialType;
@property (copy, nonatomic) NSString *reqId;
@property (copy, nonatomic) NSString *materialId;
@property (nonatomic) BOOL isFromInspirationTabStatus;
@property (copy, nonatomic) NSString *inspirationTabName;
@property (copy, nonatomic) NSString *inspirationClickPosition;
@property (copy, nonatomic) NSString *searchTabName;
@property (nonatomic) BOOL isFromSearchStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (id)stickerId;
- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)acc_referExtraParams;
- (BOOL)inspirationShoot;
- (id)acc_publishTrackEventParams:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
