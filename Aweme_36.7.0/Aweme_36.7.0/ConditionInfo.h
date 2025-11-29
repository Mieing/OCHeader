@class NSString, NSMutableArray;

@interface ConditionInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *titleArray;
@property (readonly, nonatomic) unsigned long long titleArray_Count;
@property (retain, nonatomic) NSMutableArray *subTitleArray;
@property (readonly, nonatomic) unsigned long long subTitleArray_Count;
@property (retain, nonatomic) NSMutableArray *statusTextArray;
@property (readonly, nonatomic) unsigned long long statusTextArray_Count;

+ (id)descriptor;

@end
