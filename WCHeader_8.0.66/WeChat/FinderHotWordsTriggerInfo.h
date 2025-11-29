@class NSString, FinderHotWordJumpInfo;

@interface FinderHotWordsTriggerInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSString *keyWord;
@property (retain, nonatomic) FinderHotWordJumpInfo *jumpInfo;

+ (void)initialize;

@end
