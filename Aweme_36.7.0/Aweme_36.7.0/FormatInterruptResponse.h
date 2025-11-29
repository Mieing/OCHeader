@class FormatInterruptResponse_Data;

@interface FormatInterruptResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FormatInterruptResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
