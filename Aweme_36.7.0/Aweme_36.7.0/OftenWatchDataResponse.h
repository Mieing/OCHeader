@class NSMutableArray;

@interface OftenWatchDataResponse : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *roomListArray;
@property (readonly, nonatomic) unsigned long long roomListArray_Count;

+ (id)descriptor;

@end
