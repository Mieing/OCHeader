@class NSString, NSMutableArray;

@interface MMFinderLiveOnlineStateSessionInfo : NSObject

@property (nonatomic) BOOL isOffline;
@property (nonatomic) BOOL isRecentReward;
@property (nonatomic) BOOL isRewardCount;
@property (nonatomic) BOOL needPinBottom;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableArray *userList;
@property (retain, nonatomic) NSMutableArray *recentRewardList;
@property (retain, nonatomic) NSMutableArray *gloryContacts;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *heatTitle;
@property (retain, nonatomic) NSString *footerTitle;

- (void).cxx_destruct;

@end
