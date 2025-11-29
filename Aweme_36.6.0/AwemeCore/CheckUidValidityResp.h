@class CheckUidValidityResp_Data;

@interface CheckUidValidityResp : IESLivePBBaseMessage

@property (retain, nonatomic) CheckUidValidityResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
