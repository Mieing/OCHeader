@class ImgGetResponse_Data;

@interface ImgGetResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ImgGetResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
