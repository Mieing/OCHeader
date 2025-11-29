@class BaseResponse, NSString, LiveOnlineInfo, NSData, NSMutableArray, FinderLiveContact;

@interface FinderGetLiveOnlineMemberResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *liveContacts;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSMutableArray *offlineContacts;
@property (nonatomic) unsigned long long rewardTotalAmountInHeat;
@property (nonatomic) unsigned int onlineMemberCount;
@property (nonatomic) unsigned int offlineMemberCount;
@property (retain, nonatomic) FinderLiveContact *selfContact;
@property (retain, nonatomic) NSData *liveContactsLastBuffer;
@property (nonatomic) unsigned int liveContactsContinueFlag;
@property (nonatomic) unsigned int liveContactsMaxDisplayCount;
@property (retain, nonatomic) NSMutableArray *recentRewardContacts;
@property (nonatomic) unsigned long long liveHeatValue;
@property (retain, nonatomic) NSString *adImgUrl;
@property (nonatomic) unsigned long long previewLiveOnlineMemberCount;
@property (retain, nonatomic) NSString *liveHeatValueStr;
@property (nonatomic) unsigned int boardMemberCount;
@property (retain, nonatomic) NSString *liveParticipateMemberCountStr;
@property (retain, nonatomic) NSString *liveOnlineCountStr;
@property (nonatomic) unsigned int liveOnlineMemberBoardVersion;
@property (retain, nonatomic) NSData *businessFilterBuffer;
@property (retain, nonatomic) LiveOnlineInfo *exposedOnlineInfo;
@property (retain, nonatomic) NSString *anonymousOnlineCountStr;

+ (void)initialize;

@end
