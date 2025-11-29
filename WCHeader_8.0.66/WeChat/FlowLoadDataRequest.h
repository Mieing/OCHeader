@class NewLifeStreamRequest, NewLifeLocalTabTipsInfo;

@interface FlowLoadDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NewLifeStreamRequest *streamRequest;
@property (nonatomic) unsigned int firstRequest;
@property (retain, nonatomic) NewLifeLocalTabTipsInfo *localTabTipsInfo;
@property (nonatomic) unsigned long long requestId;
@property (nonatomic) unsigned long long cgiRequestId;
@property (nonatomic) unsigned int commentScene;

+ (void)initialize;

@end
