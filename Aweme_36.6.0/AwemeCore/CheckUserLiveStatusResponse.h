@class NSMutableArray;

@interface CheckUserLiveStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;

+ (id)descriptor;

- (id)dataArray;
- (unsigned long long)dataArray_Count;

@end
