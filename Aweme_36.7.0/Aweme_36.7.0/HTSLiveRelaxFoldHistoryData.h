@class NSMutableArray;

@interface HTSLiveRelaxFoldHistoryData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *historyDataArray;
@property (readonly, nonatomic) unsigned long long historyDataArray_Count;

+ (id)descriptor;

@end
