@class BaseRequest, NSString, NSData, ParallelUploadRequest_Param;

@interface ParallelUploadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uploadId;
@property (retain, nonatomic) ParallelUploadRequest_Param *initialParam;
@property (nonatomic) unsigned int partId;
@property (retain, nonatomic) NSData *partBuffer;

+ (void)initialize;

@end
