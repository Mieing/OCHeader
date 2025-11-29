@class ContactListConfig, BizStrategyControlInfo, MenuEntryListInfo, AppMsgCoverPreloadInfo, OftenReadBarFeedsInfo, ValidExposeConfig, TimelineTitlePosConfig, BaseResponse, BizMsgResortV2ControlInfo, RedPacketCoverConfig, PublisherNewMsgInfo, BizMsgReSortConfig, BoxSearchSettingInfo, AudioFeedsInfo, BizWxaPersonalCenter, ProfilePreloadInfo, FinderLiveAutoplayConfig, PaySubscribeInfo, TimelineFinderInfo, VideoChannelControlInfo, BizReportConfig, BizPersonalCenterCellList, TimelineSettingInfo, AdvertisementExtInfo, BizFinderLiveControlInfo, RecommendFeedsInfo;

@interface BizStrategyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PaySubscribeInfo *userPaySubscribeInfo;
@property (retain, nonatomic) AppMsgCoverPreloadInfo *coverPreloadInfo;
@property (retain, nonatomic) BizStrategyControlInfo *controlInfo;
@property (retain, nonatomic) ProfilePreloadInfo *userProfilePreloadInfo;
@property (retain, nonatomic) VideoChannelControlInfo *channelInfo;
@property (retain, nonatomic) AdvertisementExtInfo *adExtInfo;
@property (retain, nonatomic) RecommendFeedsInfo *recFeedsInfo;
@property (retain, nonatomic) MenuEntryListInfo *menuEntryListInfo;
@property (retain, nonatomic) BizFinderLiveControlInfo *finderLiveInfo;
@property (retain, nonatomic) TimelineSettingInfo *timelineSettingInfo;
@property (retain, nonatomic) BizMsgReSortConfig *userBizMsgReSortConfig;
@property (retain, nonatomic) BizPersonalCenterCellList *userBizPersonalCenterCellList;
@property (retain, nonatomic) BizMsgResortV2ControlInfo *bizMsgResortV2ControlInfo;
@property (retain, nonatomic) FinderLiveAutoplayConfig *finderLiveAutoplayConfig;
@property (retain, nonatomic) BizWxaPersonalCenter *userWxaBizPersonalCenter;
@property (retain, nonatomic) TimelineTitlePosConfig *timelineTitlePosConfig;
@property (retain, nonatomic) OftenReadBarFeedsInfo *oftenReadBarFeedsInfo;
@property (retain, nonatomic) BoxSearchSettingInfo *boxSearchSettingInfo;
@property (retain, nonatomic) RedPacketCoverConfig *redPacketCoverConfig;
@property (retain, nonatomic) PublisherNewMsgInfo *userPublisherInfo;
@property (retain, nonatomic) BizReportConfig *bizReportConfig;
@property (nonatomic) int ecsNotifyStrategy;
@property (retain, nonatomic) TimelineFinderInfo *timelineFinderInfo;
@property (retain, nonatomic) AudioFeedsInfo *audioFeedsInfo;
@property (retain, nonatomic) ValidExposeConfig *validExposeConfig;
@property (retain, nonatomic) ContactListConfig *contactListConfig;
@property (nonatomic) unsigned int exptReportListRankWaitCnt;
@property (nonatomic) unsigned int prodReportListRankWaitCnt;

+ (void)initialize;

@end
