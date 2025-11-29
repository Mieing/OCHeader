@class GPBInt64Array;

@interface TIMXPBNBatchGetUserConvListReadIndexRequestBody : GPBMessage

@property (retain, nonatomic) GPBInt64Array *convShortIdArray;
@property (readonly, nonatomic) unsigned long long convShortIdArray_Count;

+ (id)descriptor;

@end
