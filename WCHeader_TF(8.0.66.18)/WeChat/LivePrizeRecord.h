@class NSString, NSMutableArray;

@interface LivePrizeRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSMutableArray *recordList;
@property (nonatomic) unsigned int liveCreateTime;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned long long liveId;

+ (void)initialize;

@end
