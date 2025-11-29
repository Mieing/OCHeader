@class NSMutableArray, rankDesc;

@interface DailySportRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) rankDesc *rankdesc;
@property (retain, nonatomic) NSMutableArray *sportrecord;
@property (nonatomic) unsigned int likecount;
@property (retain, nonatomic) NSMutableArray *likeList;
@property (nonatomic) BOOL isLike;
@property (retain, nonatomic) NSMutableArray *sportGoal;

+ (void)initialize;

@end
