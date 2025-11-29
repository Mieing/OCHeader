@class AddSongPrepareApplyPermitResponse_ResponseData;

@interface AddSongPrepareApplyPermitResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AddSongPrepareApplyPermitResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
