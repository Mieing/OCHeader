@class NSMutableArray;

@interface FinderLiveKtvPlayerWaitList : WXPBGeneratedMessage

@property (nonatomic) unsigned int playerWaitListAllSize;
@property (retain, nonatomic) NSMutableArray *playerWaitList;
@property (nonatomic) unsigned long long songListVersion;

+ (void)initialize;

@end
