@class AwardResponse_Data;

@interface AwardResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AwardResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
