@class HTSLiveRelaxLiveHistoryExtra, NSMutableArray;

@interface HTSLiveRelaxLiveHistoryResponse : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (retain, nonatomic) HTSLiveRelaxLiveHistoryExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
