@class NSString, ChatConfig, BannerTips, NSMutableArray;

@interface BizEnterpriseAttr : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *brandUserName;
@property (nonatomic) unsigned int qyUin;
@property (nonatomic) unsigned int userUin;
@property (nonatomic) unsigned int userFlag;
@property (nonatomic) unsigned int wwMaxExposeTimes;
@property (nonatomic) unsigned long long vid;
@property (nonatomic) unsigned long long corpid;
@property (nonatomic) unsigned int userType;
@property (nonatomic) BOOL isChatOpened;
@property (nonatomic) unsigned int unreadCnt;
@property (nonatomic) BOOL showConfirm;
@property (retain, nonatomic) BannerTips *bannerTips;
@property (nonatomic) BOOL usePresetBannerTips;
@property (retain, nonatomic) ChatConfig *chatConfig;
@property (retain, nonatomic) NSMutableArray *homeContacts;
@property (nonatomic) BOOL hideColleageInvite;
@property (retain, nonatomic) NSMutableArray *hiddenAppUsernameList;
@property (retain, nonatomic) NSString *colleageInviteTitle;
@property (retain, nonatomic) NSString *colleageInviteJumpUrl;

+ (void)initialize;

@end
