@class NSString, NSMutableArray;

@interface BtnActionInfoV2 : GPBMessage

@property (nonatomic) int clickAction;
@property (nonatomic) BOOL hasClickAction;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (retain, nonatomic) NSMutableArray *btnDataKeysArray;
@property (readonly, nonatomic) unsigned long long btnDataKeysArray_Count;
@property (nonatomic) int behaviorType;
@property (nonatomic) BOOL hasBehaviorType;

+ (id)descriptor;

@end
