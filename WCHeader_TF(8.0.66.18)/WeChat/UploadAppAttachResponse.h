@class NSString, BaseResponse;

@interface UploadAppAttachResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *clientAppDataId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int dataLen;
@property (nonatomic) unsigned int createTime;

+ (void)initialize;

@end
