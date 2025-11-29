@class MMFinderLiveUserStateItem, NSString, NSData, NSMutableArray, LiveOnlineInfo;

@interface WCFinderGetLiveOnlineMemberResult : NSObject

@property (retain, nonatomic) NSMutableArray *onlineUserStateItems;
@property (retain, nonatomic) MMFinderLiveUserStateItem *myLiveUserStateItem;
@property (retain, nonatomic) NSMutableArray *recentRewardUserStateItems;
@property (nonatomic) unsigned int onlineMemberCount;
@property (nonatomic) unsigned int maxDisplayCount;
@property (nonatomic) unsigned long long previewLiveOnlineMemberCount;
@property (nonatomic) unsigned long long rewardTotalAmountInHeat;
@property (nonatomic) unsigned long long liveHeatValue;
@property (retain, nonatomic) NSString *liveHeatValueStr;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *adImgUrl;
@property (nonatomic) unsigned int boardMemberCount;
@property (retain, nonatomic) NSString *liveParticipateMemberCountStr;
@property (retain, nonatomic) NSString *liveOnlineCountStr;
@property (nonatomic) unsigned int liveOnlineMemberBoardVersion;
@property (retain, nonatomic) NSData *businessFilterBuffer;
@property (retain, nonatomic) LiveOnlineInfo *exposedOnlineInfo;
@property (retain, nonatomic) NSString *anonymousOnlineCountStr;

- (void).cxx_destruct;

@end
