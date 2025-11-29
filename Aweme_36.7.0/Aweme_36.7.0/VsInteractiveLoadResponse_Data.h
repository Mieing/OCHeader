@class NSMutableArray;

@interface VsInteractiveLoadResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dotsArray;
@property (readonly, nonatomic) unsigned long long dotsArray_Count;

+ (id)descriptor;

@end
