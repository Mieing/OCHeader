@class NSMutableArray;

@interface FinderLiveModJoinLiveVisiableInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSMutableArray *opSubSwitches;
@property (nonatomic) unsigned long long opLiveId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long showTs;

+ (void)initialize;

@end
