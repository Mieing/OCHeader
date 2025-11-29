@class GPBInt64Array, NSString;

@interface HTSLiveChestInfo : IESLivePBBaseMessage

@property (nonatomic) long long chestId;
@property (nonatomic) int status;
@property (nonatomic) long long fallTime;
@property (nonatomic) long long openTime;
@property (nonatomic) long long defaultTaskId;
@property (retain, nonatomic) GPBInt64Array *cardIdArray;
@property (readonly, nonatomic) unsigned long long cardIdArray_Count;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
