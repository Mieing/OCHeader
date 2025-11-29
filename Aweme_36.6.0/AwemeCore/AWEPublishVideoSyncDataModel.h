@class AWEPublishVideoSyncContentViewItem, NSString;
@protocol ACCPublishRepository;

@interface AWEPublishVideoSyncDataModel : NSObject <ACCRepositoryContextDeprecated, ACCRepositoryRequestParamsDeprecated, AWERepositoryDraftProtocol>

@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *ulikeItem;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *syncItem;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *originItem;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *exclusiveItem;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *autoSyncItem;
@property (nonatomic) unsigned long long mediumVideoPlanUserStatus;
@property (nonatomic) BOOL hasClaimOriginPermission;
@property (nonatomic) BOOL isVideoExclusive;
@property (nonatomic) BOOL hasRewardProjectAuthorBenefit;
@property (nonatomic) BOOL isOpenSync;
@property (nonatomic) BOOL isOpenOrigin;
@property (nonatomic) BOOL isOpenVideoExclusive;
@property (nonatomic) long long videoType;
@property (nonatomic) BOOL isLongVideo;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL hasUploadParamsCache;
@property (nonatomic) BOOL hasChangeVideoSync;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publishRequestSyncParamKeys;

- (BOOL)isLandScape;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)trackInfoDicWith:(id)a0;
- (void)updateSyncVideoStatusSilent:(BOOL)a0;
- (void)resetSwitchOpenStatusIfNeeded;
- (id)trackValueForExclusiveStatus;
- (id)videoSyncItemStatusText;
- (id)videoSyncContentViewItems;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
