@class NSString, NSMutableArray;

@interface FinderLiveRewardGiftExtInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *wishListId;
@property (retain, nonatomic) NSString *requestSongName;
@property (nonatomic) BOOL isBatchReward;
@property (retain, nonatomic) NSString *crowdfundTaskId;
@property (nonatomic) unsigned int giftWallActionType;
@property (retain, nonatomic) NSMutableArray *attackFinderUsernameList;

+ (void)initialize;

@end
