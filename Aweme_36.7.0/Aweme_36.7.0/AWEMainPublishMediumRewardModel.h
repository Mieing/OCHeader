@class UIImage, NSString;
@protocol ACCPublishRepository;

@interface AWEMainPublishMediumRewardModel : NSObject <ACCRepositoryContextDeprecated, ACCRepositoryRequestParamsDeprecated, AWERepositoryDraftProtocol>

@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *coverImagePath;
@property (copy, nonatomic) NSString *videoTitle;
@property (nonatomic) BOOL isClaimOrigin;
@property (nonatomic) BOOL isExclusive;
@property (nonatomic) BOOL isSyncMediumReward;
@property (nonatomic) BOOL hasEditCover;
@property (nonatomic) BOOL hasEditTitle;
@property (copy, nonatomic) NSString *mainMediumRewardCoverResourceId;
@property (nonatomic) unsigned long long mediumVideoPlanUserStatus;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)curContentMD5Hash;
- (id)trackInfoDicWith:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
