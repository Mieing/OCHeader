@class BaseRequest, NSMutableArray, StatisticInfo;

@interface BatchGetCardItemByTpInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) StatisticInfo *statisticInfo;
@property (nonatomic) unsigned int fromScene;

+ (void)initialize;

@end
