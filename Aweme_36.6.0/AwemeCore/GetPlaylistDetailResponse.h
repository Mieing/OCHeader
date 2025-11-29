@class GetPlaylistDetailResponse_ResponseData;

@interface GetPlaylistDetailResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetPlaylistDetailResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
