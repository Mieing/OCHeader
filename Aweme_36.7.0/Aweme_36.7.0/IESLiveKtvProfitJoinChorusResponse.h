@class IESLiveKtvProfitJoinChorusResponse_ResponseData;

@interface IESLiveKtvProfitJoinChorusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitJoinChorusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
