@class BaseRequest, NSString;

@interface UpdateRuntimeQrcodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *respData;

+ (void)initialize;

@end
