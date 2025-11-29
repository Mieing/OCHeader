@class GetFormatConfigResponse_Data;

@interface GetFormatConfigResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetFormatConfigResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
