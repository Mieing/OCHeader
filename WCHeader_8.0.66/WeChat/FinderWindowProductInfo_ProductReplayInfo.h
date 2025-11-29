@class NSString;

@interface FinderWindowProductInfo_ProductReplayInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned long long replayId;
@property (nonatomic) unsigned int replayStatus;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSString *secIconUrl;
@property (retain, nonatomic) NSString *secTitleWording;

+ (void)initialize;

@end
