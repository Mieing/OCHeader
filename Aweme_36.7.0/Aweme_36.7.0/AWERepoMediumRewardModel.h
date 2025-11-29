@class NSString, UIImage;
@protocol ACCPublishRepository;

@interface AWERepoMediumRewardModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryContextDeprecated>

@property (nonatomic) BOOL isRewardProject;
@property (nonatomic) BOOL enableOriginAuth;
@property (nonatomic) BOOL enableExclusiveAuth;
@property (copy, nonatomic) NSString *xiguaUID;
@property (copy, nonatomic) NSString *awemeUID;
@property (nonatomic) BOOL isExclusive;
@property (nonatomic) BOOL isClaimOrigin;
@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *coverType;
@property (nonatomic) BOOL isCoverCut;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double videoDuration;
@property (retain, nonatomic) UIImage *firstRenderImage;
@property (copy, nonatomic) NSString *firstRenderImagePath;
@property (nonatomic) double enterPublishTime;
@property (nonatomic) BOOL hasEditedTitle;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *videoStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)mediumRewardBaseParamsForTrack;
- (id)mediumRewardVideoInfoParamsForTrack;
- (id)mediumRewardEditedInfoParamsForTrack;
- (id)mediumRewardCoverEditedInfoParamsForTrack;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
