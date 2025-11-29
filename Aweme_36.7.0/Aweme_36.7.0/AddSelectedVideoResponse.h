@class AddSelectedVideoResponse_Data;

@interface AddSelectedVideoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AddSelectedVideoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
