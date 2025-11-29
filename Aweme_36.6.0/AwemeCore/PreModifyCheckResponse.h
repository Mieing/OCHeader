@class PreModifyCheckResponse_Data;

@interface PreModifyCheckResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PreModifyCheckResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
