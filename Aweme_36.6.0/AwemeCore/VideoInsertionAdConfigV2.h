@class GPBInt64Array;

@interface VideoInsertionAdConfigV2 : GPBMessage

@property (retain, nonatomic) GPBInt64Array *insertTimeArray;
@property (readonly, nonatomic) unsigned long long insertTimeArray_Count;
@property (nonatomic) long long forceViewTime;
@property (nonatomic) BOOL hasForceViewTime;

+ (id)descriptor;

@end
