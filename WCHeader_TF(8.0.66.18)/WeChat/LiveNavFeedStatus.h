@interface LiveNavFeedStatus : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (nonatomic) unsigned long long statusFlag;
@property (nonatomic) unsigned int coverCostMs;
@property (nonatomic) unsigned long long coverEndTime;

+ (void)initialize;

@end
