@class GPBInt32Array, NSMutableArray;

@interface BtnTriggerStrategyV2 : GPBMessage

@property (retain, nonatomic) GPBInt32Array *triggerActionsArray;
@property (readonly, nonatomic) unsigned long long triggerActionsArray_Count;
@property (nonatomic) int playProgress;
@property (nonatomic) BOOL hasPlayProgress;
@property (nonatomic) int animation;
@property (nonatomic) BOOL hasAnimation;
@property (retain, nonatomic) NSMutableArray *btnDataKeysArray;
@property (readonly, nonatomic) unsigned long long btnDataKeysArray_Count;
@property (nonatomic) int stayTime;
@property (nonatomic) BOOL hasStayTime;

+ (id)descriptor;

@end
