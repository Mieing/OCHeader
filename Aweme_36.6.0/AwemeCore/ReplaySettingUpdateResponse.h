@class ReplaySettingUpdateResponse_Data;

@interface ReplaySettingUpdateResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReplaySettingUpdateResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
