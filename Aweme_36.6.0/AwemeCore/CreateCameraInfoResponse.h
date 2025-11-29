@class CreateCameraInfoResponse_Data;

@interface CreateCameraInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CreateCameraInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
