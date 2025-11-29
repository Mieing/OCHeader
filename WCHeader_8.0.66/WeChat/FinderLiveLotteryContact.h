@class NSString, NSData, FinderLiveLotteryWinnerExtInfo;

@interface FinderLiveLotteryContact : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *msgUsername;
@property (retain, nonatomic) NSData *liveContactExtInfo;
@property (nonatomic) BOOL disablePersonalMsg;
@property (retain, nonatomic) NSString *fillWording;
@property (retain, nonatomic) FinderLiveLotteryWinnerExtInfo *winnerInfo;

+ (void)initialize;

@end
