@class CancelStickSelectedVideoResponse_Data;

@interface CancelStickSelectedVideoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CancelStickSelectedVideoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
