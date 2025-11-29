@class NSString, BaseResponse;

@interface XMCreateUploadUrlRsp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *fileid;
@property (nonatomic) BOOL isExist;
@property (retain, nonatomic) NSString *dns;
@property (retain, nonatomic) NSString *uploadKey;
@property (nonatomic) unsigned int expiredTime;
@property (nonatomic) unsigned int channel;

+ (void)initialize;

@end
