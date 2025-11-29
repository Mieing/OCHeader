@class GPBInt64Array;

@interface HTSLiveAssetIdList : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *idsArray;
@property (readonly, nonatomic) unsigned long long idsArray_Count;

+ (id)descriptor;

@end
