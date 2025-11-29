@class UnperformanceDetailData;

@interface UnperformanceDetailResonse : IESLivePBBaseMessage

@property (retain, nonatomic) UnperformanceDetailData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
