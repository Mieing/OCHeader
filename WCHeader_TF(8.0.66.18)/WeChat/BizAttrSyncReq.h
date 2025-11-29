@class BaseRequest, NSString, NSData;

@interface BizAttrSyncReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizUserName;
@property (retain, nonatomic) NSData *lastAttrVersion;

+ (void)initialize;

@end
