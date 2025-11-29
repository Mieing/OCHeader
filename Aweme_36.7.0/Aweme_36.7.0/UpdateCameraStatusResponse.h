@class UpdateCameraStatusResponse_Data;

@interface UpdateCameraStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateCameraStatusResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
