@class IsRenderEnableResponse_Data;

@interface IsRenderEnableResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IsRenderEnableResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
