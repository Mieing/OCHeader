@class GPBInt64Array, NSString;

@interface HTSLiveKtvEffectDegradeContent : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *effectTypesArray;
@property (readonly, nonatomic) unsigned long long effectTypesArray_Count;
@property (copy, nonatomic) NSString *effectTypesStr;

+ (id)descriptor;

@end
