@class NSString;

@interface RankItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int rank;
@property (nonatomic) unsigned long long score;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL upedByMe;
@property (nonatomic) int upedCount;
@property (retain, nonatomic) NSString *timeScoreDesc;

+ (void)initialize;

@end
