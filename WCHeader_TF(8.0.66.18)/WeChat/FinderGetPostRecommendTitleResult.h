@class NSData, NSMutableArray;

@interface FinderGetPostRecommendTitleResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *recommendWordingList;
@property (nonatomic) unsigned long long nextDuration;
@property (nonatomic) unsigned int minWordChange;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSMutableArray *recommendTitleInfoList;

+ (void)initialize;

@end
