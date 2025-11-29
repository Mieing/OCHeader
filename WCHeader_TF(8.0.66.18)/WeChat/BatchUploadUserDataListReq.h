@class BaseRequest, NSData;

@interface BatchUploadUserDataListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSData *buffer;

+ (void)initialize;

@end
