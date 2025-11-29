@class BaseRequest, NSString;

@interface PushNewTipsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int tipsId;
@property (nonatomic) unsigned int tipsVersion;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *uniqueId;

+ (void)initialize;

@end
