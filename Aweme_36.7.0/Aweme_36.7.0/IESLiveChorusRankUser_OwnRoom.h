@class GPBInt64Array, NSMutableArray;

@interface IESLiveChorusRankUser_OwnRoom : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *roomIdsArray;
@property (readonly, nonatomic) unsigned long long roomIdsArray_Count;
@property (retain, nonatomic) NSMutableArray *roomIdsStrArray;
@property (readonly, nonatomic) unsigned long long roomIdsStrArray_Count;

+ (id)descriptor;

@end
