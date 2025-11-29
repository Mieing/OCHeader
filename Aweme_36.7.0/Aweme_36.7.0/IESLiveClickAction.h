@class NSMutableArray;

@interface IESLiveClickAction : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *actionListArray;
@property (readonly, nonatomic) unsigned long long actionListArray_Count;

+ (id)descriptor;

@end
