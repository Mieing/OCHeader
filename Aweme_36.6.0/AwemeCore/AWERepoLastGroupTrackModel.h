@class NSString;
@protocol ACCPublishRepository;

@interface AWERepoLastGroupTrackModel : NSObject <ACCRepoRegister, ACCRepositoryClipContextProtocol, ACCRepositoryTrackContextDeprecated, AWERepositoryDraftProtocol, ACCRepoLastGroupTrackData, ACCRepoLastGroupTrackModelProtocol, ACCRepoLastGroupGidTrackModelProtocol, ACCRepositoryContextDeprecated, NSCopying, NSCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *lastPlayGid;
@property (copy, nonatomic) NSString *lastpagePlayAuthorId;
@property (copy, nonatomic) NSString *lastpagePlayHashtagNames;
@property (copy, nonatomic) NSString *lastpagePlayMusicId;
@property (copy, nonatomic) NSString *lastpagePlayPropIds;
@property (copy, nonatomic) NSString *lastPagePlayGid;
@property (copy, nonatomic) NSString *lastPageName;
@property (copy, nonatomic) NSString *prePageName;
@property (copy, nonatomic) NSString *prePagePlayGid;
@property (copy, nonatomic) NSString *rootGid;
@property (copy, nonatomic) NSString *fromGroupID;
@property (copy, nonatomic) NSString *reviseFromGroupID;
@property (copy, nonatomic) NSString *reviseBackFromGroupID;
@property (copy, nonatomic) NSString *lastGroupID;
@property (copy, nonatomic) NSString *lastGIDFrom;
@property (copy, nonatomic) NSString *originalGroupID;
@property (nonatomic) long long originalGidDistance;
@property (copy, nonatomic) NSString *aiUploadFromGroupId;
@property (copy, nonatomic) NSString *aiUploadLastGroupId;
@property (copy, nonatomic) NSString *aiUploadFromTemplateId;
@property (copy, nonatomic) NSString *aiUploadLastTemplateId;
@property (copy, nonatomic) NSString *lastGroupMusicId;
@property (copy, nonatomic) NSString *lastGroupPropIds;
@property (nonatomic) long long lastGroupAwemeType;
@property (copy, nonatomic) NSString *lastGroupTemplateId;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (id)acc_publishTrackEventParams:(id)a0;
- (id)originalGroupInfo;
- (id)fromGroupIDValue;
- (id)reviseBackFromGroupIDValue;
- (id)lastGroupIDValue;
- (id)lastGIDFromValue;
- (id)originalGroupIDValue;
- (long long)originalGidDistanceValue;
- (id)reviseFromGroupIDValue;
- (void)willEnterEditPageFromClipPage:(id)a0 originalPublishModel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
