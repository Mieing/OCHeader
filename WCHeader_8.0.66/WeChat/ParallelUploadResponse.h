@class NSString, BaseResponse;

@interface ParallelUploadResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *uploadId;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned int retryDelaySeconds;
@property (retain, nonatomic) NSString *imgInfo;
@property (nonatomic) unsigned int currentPartIdlimit;

+ (void)initialize;

@end
