@class NSString, NSMutableArray;

@interface ComboData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *freeTrialText;
@property (retain, nonatomic) NSMutableArray *comboInfosArray;
@property (readonly, nonatomic) unsigned long long comboInfosArray_Count;

+ (id)descriptor;

@end
