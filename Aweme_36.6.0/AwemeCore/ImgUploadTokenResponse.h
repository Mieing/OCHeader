@class ImgUploadTokenResponse_Data;

@interface ImgUploadTokenResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ImgUploadTokenResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
