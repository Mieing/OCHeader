@class likeItem, NSString, RankExtInfo, NSMutableArray, BaseResponse;

@interface GetUserRankLikeCountResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *friendlikelist;
@property (retain, nonatomic) NSMutableArray *likeuserlist;
@property (retain, nonatomic) NSMutableArray *affecteduserlist;
@property (retain, nonatomic) NSString *championcoverurl;
@property (retain, nonatomic) NSString *championmotto;
@property (retain, nonatomic) NSString *rankid;
@property (retain, nonatomic) NSString *jumpchampionurl;
@property (retain, nonatomic) NSString *shareurl;
@property (nonatomic) BOOL iscacheexist;
@property (retain, nonatomic) NSString *sharetitle;
@property (retain, nonatomic) NSMutableArray *follows;
@property (nonatomic) BOOL isLikedCover;
@property (retain, nonatomic) NSString *donationUrl;
@property (nonatomic) BOOL hascoverurl;
@property (nonatomic) unsigned int ranklistShowtype;
@property (retain, nonatomic) NSString *myCoverUrl;
@property (retain, nonatomic) likeItem *myInfo;
@property (retain, nonatomic) RankExtInfo *rankExtInfo;

+ (void)initialize;

@end
