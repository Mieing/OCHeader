@class BaseRequest, NSString;

@interface SetBlackListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (nonatomic) unsigned int identityType;
@property (retain, nonatomic) NSString *identityName;
@property (nonatomic) BOOL remove;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
