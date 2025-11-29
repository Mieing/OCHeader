@class NSString, BaseResponse;

@interface CDNUploadMsgImgPrepareResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *clientImgId;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long newMsgId;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned int actionFlag;
@property (nonatomic) unsigned int noCommit;

+ (void)initialize;

@end
