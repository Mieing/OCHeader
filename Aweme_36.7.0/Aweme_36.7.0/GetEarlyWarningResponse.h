@class EarlyWarningData;

@interface GetEarlyWarningResponse : IESLivePBBaseMessage

@property (retain, nonatomic) EarlyWarningData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
