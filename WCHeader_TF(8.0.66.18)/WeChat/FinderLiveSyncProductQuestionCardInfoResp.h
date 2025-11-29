@class NSString, NSMutableArray;

@interface FinderLiveSyncProductQuestionCardInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *cardList;
@property (retain, nonatomic) NSString *buf;
@property (nonatomic) unsigned long long unreadCardNum;

+ (void)initialize;

@end
