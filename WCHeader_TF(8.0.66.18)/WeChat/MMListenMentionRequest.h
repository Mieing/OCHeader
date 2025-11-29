@class BaseRequest;

@interface MMListenMentionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int mentionScene;
@property (nonatomic) unsigned long long minFilterId;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int mentionType;
@property (nonatomic) unsigned long long lastSyncId;
@property (nonatomic) unsigned int notifyScene;

+ (void)initialize;

@end
