@class DeleteSelectedVideoResponse_Data;

@interface DeleteSelectedVideoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DeleteSelectedVideoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
