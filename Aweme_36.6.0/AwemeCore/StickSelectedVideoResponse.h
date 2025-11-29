@class StickSelectedVideoResponse_Data;

@interface StickSelectedVideoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StickSelectedVideoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
