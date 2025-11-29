@class ChangeShowStatusResp_Data;

@interface ChangeShowStatusResp : IESLivePBBaseMessage

@property (retain, nonatomic) ChangeShowStatusResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
