@class NSString, BaseResponse;

@interface UploadVideoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int thumbStartPos;
@property (nonatomic) unsigned int videoStartPos;
@property (nonatomic) unsigned long long newMsgId;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned int actionFlag;
@property (nonatomic) BOOL videoNeedReupload;
@property (nonatomic) BOOL rawVideoNeedReupload;
@property (retain, nonatomic) NSString *rawAeskey;

+ (void)initialize;

@end
