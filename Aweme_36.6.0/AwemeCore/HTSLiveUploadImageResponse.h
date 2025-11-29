@class HTSLiveUploadImageResponse_ResponseData;

@interface HTSLiveUploadImageResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUploadImageResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
