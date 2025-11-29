@class GPBInt64Array, NSMutableArray;

@interface HTSLiveChorusLeaderSettingContent : IESLivePBBaseMessage

@property (nonatomic) int leadChorusSwitch;
@property (retain, nonatomic) GPBInt64Array *assignUserIdsArray;
@property (readonly, nonatomic) unsigned long long assignUserIdsArray_Count;
@property (retain, nonatomic) NSMutableArray *assignOpenUserIdsArray;
@property (readonly, nonatomic) unsigned long long assignOpenUserIdsArray_Count;

+ (id)descriptor;

@end
