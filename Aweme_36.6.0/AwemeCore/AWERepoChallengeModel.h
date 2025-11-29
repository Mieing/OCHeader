@class NSString, NSData;
@protocol ACCPublishRepository, ACCChallengeModelProtocol;

@interface AWERepoChallengeModel : NSObject <ACCRepositoryTrackContextDeprecated, ACCRepositoryDraftContextDeprecated, AWERepositoryDraftProtocol, ACCRepoRegister, NSCopying, ACCRepositoryRequestParamsDeprecated, ACCRepositoryContextDeprecated, ACCRepositoryTrackContextDeprecated, AWERepoChallengeData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCChallengeModelProtocol> challenge;
@property (retain, nonatomic) NSData *challengeJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (id)allChallengeNameArray;
- (id)allChallengeIdArray;
- (id)createWithJson:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
