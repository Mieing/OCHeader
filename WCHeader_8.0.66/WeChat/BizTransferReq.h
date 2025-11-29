@class BaseRequest, NSString, NSData;

@interface BizTransferReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *mainBrandUserName;
@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *cmdData;

+ (void)initialize;

@end
