@class GetIconBackGroundResponse_Data;

@interface GetIconBackGroundResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetIconBackGroundResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
