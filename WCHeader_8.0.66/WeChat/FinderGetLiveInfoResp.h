@class FinderGetLiveInfoResp_AnchorInfo, FinderLiveAnchorQuestEntrance, FinderLiveStreamRelatedListBackupFeedInfo, FinderLiveAutoGenReplayOption, FinderGetLiveInfoResp_LiveClosePageControlInfo, FinderJumpInfo, FinderLiveAbnormalClosedPageInfo, FinderLiveShareCardDisplayInfo, BaseResponse, NSMutableArray, NSString, FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo, FinderLiveInfo, FinderGetLiveInfoResp_LiveCoverImage, FinderNotifyMoreLiveInfo, FinderGetLiveInfoResp_FinderLiveAudienceCloseLiveFollowInfo, FinderLiveStreamJumpNavInfo, FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo;

@interface FinderGetLiveInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveInfo *liveInfo;
@property (nonatomic) unsigned int liveNewFansNum;
@property (nonatomic) unsigned int refreshInterval;
@property (retain, nonatomic) NSString *recommendReason;
@property (nonatomic) unsigned int bizLiveNewFansNum;
@property (retain, nonatomic) NSMutableArray *liveSuggestionJump;
@property (retain, nonatomic) FinderLiveAbnormalClosedPageInfo *abnormalClosePage;
@property (retain, nonatomic) FinderGetLiveInfoResp_LiveCoverImage *liveCover;
@property (retain, nonatomic) FinderJumpInfo *liveDataDetailsJump;
@property (nonatomic) unsigned int replayPrivilege;
@property (retain, nonatomic) FinderJumpInfo *liveLoyaltyCardJump;
@property (retain, nonatomic) FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo *previewJoinliveControlInfo;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) FinderGetLiveInfoResp_LiveClosePageControlInfo *closePageControlInfo;
@property (retain, nonatomic) NSMutableArray *closePageActivityBanner;
@property (retain, nonatomic) NSString *liveDataDetailsJumpWording;
@property (retain, nonatomic) FinderJumpInfo *creatorCenterEntrance;
@property (nonatomic) unsigned int autoPlayControlFlag;
@property (nonatomic) BOOL disableShareCardExpose;
@property (retain, nonatomic) FinderNotifyMoreLiveInfo *notifyMoreLive;
@property (retain, nonatomic) FinderLiveStreamJumpNavInfo *jumpNavInfo;
@property (retain, nonatomic) FinderLiveShareCardDisplayInfo *shareCardDisplayInfo;
@property (retain, nonatomic) FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo *notificationDynamicDisplayInfo;
@property (retain, nonatomic) FinderGetLiveInfoResp_AnchorInfo *anchorInfo;
@property (retain, nonatomic) FinderLiveAnchorQuestEntrance *anchorQuestEntrance;
@property (nonatomic) unsigned int sharePageStatus;
@property (nonatomic) unsigned long long audienceEndPageControl;
@property (retain, nonatomic) NSString *generateReplayPageDisplayInfo;
@property (retain, nonatomic) FinderLiveStreamRelatedListBackupFeedInfo *backupFeedsOnImpression;
@property (retain, nonatomic) FinderLiveAutoGenReplayOption *autoGenReplayOption;
@property (retain, nonatomic) FinderGetLiveInfoResp_FinderLiveAudienceCloseLiveFollowInfo *audienceFollowInfo;

+ (void)initialize;

@end
