@class NSDictionary, AWECodeGenForwardNoticeModel, AWECodeGenVoteNoticeModel, AWECodeGenUserAtNoticeModel, AWECodeGenViewNoticeModel, AWECodeGenInteractiveGeneralNoticeModel, NSString, AWECodeGenCommentNoticeModel, AWECodeGenCompatTipModel, AWECodeGenUrlModel, AWECodeGenDiggNoticeModel, AWECodeGenInteractiveDisableInfoModel, AWECodeGenStoryNoticeModel, AWECodeGenVisitorNoticeModel;

@interface AWECodeGenBaseNoticeModel : AWEBaseDataModel

@property (nonatomic) long long nid;
@property (nonatomic) long long type;
@property (nonatomic) long long createTime;
@property (retain, nonatomic) AWECodeGenDiggNoticeModel *diggModel;
@property (retain, nonatomic) AWECodeGenCommentNoticeModel *commentModel;
@property (copy, nonatomic) NSDictionary *announcement;
@property (copy, nonatomic) NSDictionary *follow;
@property (copy, nonatomic) NSDictionary *text;
@property (copy, nonatomic) NSDictionary *audit;
@property (copy, nonatomic) NSDictionary *challenge;
@property (nonatomic) long long userId;
@property (retain, nonatomic) AWECodeGenUserAtNoticeModel *atModel;
@property (copy, nonatomic) NSDictionary *shop;
@property (copy, nonatomic) NSDictionary *ad;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) AWECodeGenUrlModel *groupAvatarThumbModel;
@property (copy, nonatomic) NSDictionary *createAweme;
@property (copy, nonatomic) NSDictionary *followRequestApprove;
@property (copy, nonatomic) NSDictionary *duet;
@property (copy, nonatomic) NSDictionary *friend;
@property (retain, nonatomic) AWECodeGenUrlModel *innerAvatarThumbModel;
@property (retain, nonatomic) AWECodeGenStoryNoticeModel *storyNoticeModel;
@property (copy, nonatomic) NSDictionary *cardNotice;
@property (copy, nonatomic) NSDictionary *lubanNotice;
@property (copy, nonatomic) NSDictionary *f2fNotice;
@property (copy, nonatomic) NSDictionary *starAtlasNotice;
@property (copy, nonatomic) NSDictionary *poiNotice;
@property (copy, nonatomic) NSString *nidStr;
@property (nonatomic) int lowestPosition;
@property (copy, nonatomic) NSDictionary *liveAssistant;
@property (retain, nonatomic) AWECodeGenVoteNoticeModel *voteNoticeModel;
@property (copy, nonatomic) NSDictionary *walletNotice;
@property (copy, nonatomic) NSDictionary *adLink;
@property (copy, nonatomic) NSDictionary *urge;
@property (copy, nonatomic) NSDictionary *amazingNotice;
@property (copy, nonatomic) NSDictionary *tcmNotice;
@property (copy, nonatomic) NSDictionary *gameNotice;
@property (nonatomic) long long taskId;
@property (nonatomic) long long vcdAuthStatus;
@property (copy, nonatomic) NSDictionary *migrateNotice;
@property (copy, nonatomic) NSDictionary *xsNotice;
@property (copy, nonatomic) NSDictionary *creatorMissionNotice;
@property (nonatomic) BOOL hasRead;
@property (copy, nonatomic) NSString *taskIdStr;
@property (copy, nonatomic) NSDictionary *donation;
@property (retain, nonatomic) AWECodeGenForwardNoticeModel *forwardModel;
@property (copy, nonatomic) NSDictionary *promoteNotice;
@property (copy, nonatomic) NSDictionary *bizNotice;
@property (retain, nonatomic) AWECodeGenViewNoticeModel *viewNoticeModel;
@property (copy, nonatomic) NSDictionary *commonNotice;
@property (copy, nonatomic) NSDictionary *recommendNotice;
@property (retain, nonatomic) AWECodeGenVisitorNoticeModel *visitorNoticeModel;
@property (nonatomic) BOOL itemDisable;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSDictionary *generalNotice;
@property (nonatomic) long long readTime;
@property (nonatomic) BOOL noticeDisable;
@property (retain, nonatomic) AWECodeGenInteractiveGeneralNoticeModel *interactiveNoticeModel;
@property (nonatomic) int noticePinned;
@property (nonatomic) long long interactiveBizId;
@property (retain, nonatomic) AWECodeGenInteractiveDisableInfoModel *disableInfoModel;
@property (copy, nonatomic) NSString *objectId;
@property (nonatomic) int landingGroup;
@property (retain, nonatomic) AWECodeGenCompatTipModel *compatTipModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
