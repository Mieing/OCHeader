@class NSString, NSMutableArray;

@interface FinderPrivateMsgContactExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSMutableArray *badgeInfos;
@property (nonatomic) unsigned long long rewardAmount;
@property (nonatomic) unsigned long long interactionCount;
@property (nonatomic) unsigned int followFlag;
@property (nonatomic) BOOL isMyMember;

+ (void)initialize;

@end
