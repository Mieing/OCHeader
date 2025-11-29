@class GetSelectedVideoListResponse_Data;

@interface GetSelectedVideoListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetSelectedVideoListResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
