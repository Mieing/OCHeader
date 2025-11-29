@class GPBInt64Array;

@interface HTSLiveChestGameSetting : IESLivePBBaseMessage

@property (nonatomic) long long chestNum;
@property (retain, nonatomic) GPBInt64Array *taskIdsArray;
@property (readonly, nonatomic) unsigned long long taskIdsArray_Count;

+ (id)descriptor;

@end
