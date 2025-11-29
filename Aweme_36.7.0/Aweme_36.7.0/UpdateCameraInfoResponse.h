@class UpdateCameraInfoResponse_Data;

@interface UpdateCameraInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateCameraInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
