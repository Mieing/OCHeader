@class NSString;

@interface BizAppMsgRelatedInfoReq_AppMsgUrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int reqType;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned long long commentTopicId;

+ (void)initialize;

@end
