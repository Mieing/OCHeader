@class NSMutableArray;

@interface HTSLiveTaskTodo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *stepsArray;
@property (readonly, nonatomic) unsigned long long stepsArray_Count;

+ (id)descriptor;

@end
