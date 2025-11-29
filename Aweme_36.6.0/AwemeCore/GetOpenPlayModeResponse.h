@class GetOpenPlayModeResponse_Data;

@interface GetOpenPlayModeResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetOpenPlayModeResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
