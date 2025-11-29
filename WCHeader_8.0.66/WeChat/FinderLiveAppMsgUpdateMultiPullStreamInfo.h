@class NSString;

@interface FinderLiveAppMsgUpdateMultiPullStreamInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *deleteStreamId;
@property (nonatomic) unsigned long long seq;

+ (void)initialize;

@end
