@class NSString, NSMutableArray;

@interface MMListenMusicRewardInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isOpenReward;
@property (retain, nonatomic) NSMutableArray *rewardUserList;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *appreciateDesc;
@property (nonatomic) unsigned int rewardUserCount;

+ (void)initialize;

@end
