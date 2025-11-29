@class BaseRequest, NSString;

@interface TempUrlReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (nonatomic) unsigned int appmsgid;
@property (nonatomic) unsigned int idx;

+ (void)initialize;

@end
