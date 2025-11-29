@class NSMutableArray;

@interface GetRealtimeSuggestListResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *suggestAndChangeListArray;
@property (readonly, nonatomic) unsigned long long suggestAndChangeListArray_Count;

+ (id)descriptor;

@end
