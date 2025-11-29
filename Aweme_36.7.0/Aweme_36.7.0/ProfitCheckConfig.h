@class NSMutableArray;

@interface ProfitCheckConfig : IESLivePBBaseMessage

@property (nonatomic) BOOL needReport;
@property (retain, nonatomic) NSMutableArray *configsArray;
@property (readonly, nonatomic) unsigned long long configsArray_Count;

+ (id)descriptor;

@end
