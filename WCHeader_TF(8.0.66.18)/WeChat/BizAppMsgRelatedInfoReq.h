@class BaseRequest, NSMutableArray;

@interface BizAppMsgRelatedInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *urlInfo;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
