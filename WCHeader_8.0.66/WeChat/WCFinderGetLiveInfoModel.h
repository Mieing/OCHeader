@class FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo, NSString, FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo, FinderNotifyMoreLiveInfo, FinderJumpInfo, FinderLiveStreamRelatedListBackupFeedInfo, FinderGetLiveInfoResp_FinderLiveAudienceCloseLiveFollowInfo;

@interface WCFinderGetLiveInfoModel : NSObject

@property (retain, nonatomic) FinderJumpInfo *liveLoyaltyCardJump;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo *previewJoinliveControlInfo;
@property (nonatomic) unsigned long long displayElementFlag;
@property (nonatomic) int anchorDisplayElementFlag;
@property (nonatomic) unsigned int autoPlayControlFlag;
@property (retain, nonatomic) FinderNotifyMoreLiveInfo *notifyMoreLiveConfig;
@property (retain, nonatomic) FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo *notificationDynamicDisplayInfo;
@property (retain, nonatomic) FinderLiveStreamRelatedListBackupFeedInfo *backupFeeds;
@property (retain, nonatomic) FinderGetLiveInfoResp_FinderLiveAudienceCloseLiveFollowInfo *audienceFollowInfo;

- (void).cxx_destruct;

@end
