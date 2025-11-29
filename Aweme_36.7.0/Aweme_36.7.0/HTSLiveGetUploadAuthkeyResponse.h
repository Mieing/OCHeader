@class HTSLiveGetUploadAuthkeyResponse_ResponseData;

@interface HTSLiveGetUploadAuthkeyResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGetUploadAuthkeyResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
