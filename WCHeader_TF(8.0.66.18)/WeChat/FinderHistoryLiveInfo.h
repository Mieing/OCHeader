@class NSString;

@interface FinderHistoryLiveInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *description;
@property (nonatomic) unsigned int onlineCnt;

+ (void)initialize;

@end
