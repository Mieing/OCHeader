@class FacePositionResponse_ResponseData;

@interface FacePositionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FacePositionResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
