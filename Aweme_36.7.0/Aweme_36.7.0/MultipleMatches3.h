@class NSString, NSMutableDictionary;

@interface MultipleMatches3 : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *userInfos;
@property (readonly, nonatomic) unsigned long long userInfos_Count;
@property (nonatomic) long long currentMatch;
@property (nonatomic) BOOL end;
@property (copy, nonatomic) NSString *winnerUid;
@property (copy, nonatomic) NSString *currentWinnerUid;

+ (id)descriptor;

@end
