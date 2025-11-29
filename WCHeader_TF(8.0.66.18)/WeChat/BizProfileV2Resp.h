@class BizVideoFinderInfo, BizBrandInfo, BizProfileV2Resp_FinderLiveNoticeExtInfo, BizTopicList, BizAccountInfo, BaseResponse, ProfileSetting, NSMutableArray, BizNameCard, BizBaseInfo, NSString, BizMessageList, WxaEcEntranceInfo, AiChatOpenInfo, BizProfileV2Resp_Tab, BizServiceInfo, NSData, BizProfileV2Resp_FinderLiveNoticeInfoV2;

@interface BizProfileV2Resp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BizAccountInfo *accountInfo;
@property (retain, nonatomic) BizBaseInfo *baseInfo;
@property (retain, nonatomic) BizMessageList *msgList;
@property (retain, nonatomic) BizBrandInfo *brandInfo;
@property (retain, nonatomic) BizMessageList *videoList;
@property (retain, nonatomic) BizServiceInfo *serviceInfo;
@property (nonatomic) unsigned int funcFlag;
@property (retain, nonatomic) NSMutableArray *funcFlagWording;
@property (nonatomic) unsigned int preLoad;
@property (retain, nonatomic) NSString *searchGuideInfo;
@property (retain, nonatomic) BizTopicList *topicList;
@property (retain, nonatomic) BizVideoFinderInfo *videoFinderInfo;
@property (retain, nonatomic) BizMessageList *shortMsgList;
@property (nonatomic) int videoTabType;
@property (nonatomic) int shortMsgTabType;
@property (retain, nonatomic) NSMutableArray *liveInfo;
@property (nonatomic) BOOL finderVideoIsBizMode;
@property (retain, nonatomic) ProfileSetting *setting;
@property (retain, nonatomic) BizNameCard *nameCard;
@property (retain, nonatomic) BizProfileV2Resp_FinderLiveNoticeExtInfo *liveExtInfo;
@property (retain, nonatomic) NSString *ipwording;
@property (retain, nonatomic) WxaEcEntranceInfo *wxaEcEntrance;
@property (nonatomic) unsigned int showSubBizRec;
@property (retain, nonatomic) NSData *newEcEntrance;
@property (nonatomic) BOOL useNewEcEntrance;
@property (retain, nonatomic) BizProfileV2Resp_Tab *articleTab;
@property (retain, nonatomic) BizProfileV2Resp_Tab *pictextTab;
@property (retain, nonatomic) BizProfileV2Resp_Tab *audioTab;
@property (retain, nonatomic) BizProfileV2Resp_FinderLiveNoticeInfoV2 *liveInfoV2;
@property (retain, nonatomic) AiChatOpenInfo *aiChatInfo;
@property (nonatomic) unsigned int gender;

+ (void)initialize;

@end
