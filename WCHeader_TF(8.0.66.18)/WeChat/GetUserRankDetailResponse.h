@class NSMutableArray, NSString, rankDesc, BaseResponse;

@interface GetUserRankDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *coverurl;
@property (retain, nonatomic) NSString *motto;
@property (retain, nonatomic) rankDesc *rankdesc;
@property (retain, nonatomic) NSMutableArray *ranklist;
@property (retain, nonatomic) NSMutableArray *rankdetaillist;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSMutableArray *affecteduserlist;
@property (retain, nonatomic) NSString *shareurl;
@property (retain, nonatomic) NSString *sharetitle;
@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *follows;
@property (nonatomic) BOOL isFollower;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (nonatomic) BOOL isLikedCover;
@property (nonatomic) unsigned int myranknum;
@property (retain, nonatomic) NSString *reporturl;
@property (retain, nonatomic) NSMutableArray *sportrecord;
@property (nonatomic) unsigned int likecount;
@property (retain, nonatomic) NSMutableArray *likeList;
@property (nonatomic) BOOL isLike;
@property (retain, nonatomic) NSMutableArray *sportGoal;

+ (void)initialize;

@end
