@class NSMutableArray;

@interface NewLifeJumpSyncInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *jumpInfos;

+ (void)initialize;

@end
