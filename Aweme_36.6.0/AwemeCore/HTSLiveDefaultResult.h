@class NSString, NSMutableDictionary, GPBBoolArray, GPBInt64Array, NSMutableArray, GPBDoubleArray;

@interface HTSLiveDefaultResult : IESLivePBBaseMessage

@property (nonatomic) int resultType;
@property (nonatomic) long long defaultInt64;
@property (nonatomic) double defaultFloat64;
@property (copy, nonatomic) NSString *defaultString;
@property (nonatomic) BOOL defaultBool;
@property (retain, nonatomic) NSMutableDictionary *defaultMap;
@property (readonly, nonatomic) unsigned long long defaultMap_Count;
@property (retain, nonatomic) GPBInt64Array *int64ArrayValArray;
@property (readonly, nonatomic) unsigned long long int64ArrayValArray_Count;
@property (retain, nonatomic) NSMutableArray *stringArrayValArray;
@property (readonly, nonatomic) unsigned long long stringArrayValArray_Count;
@property (retain, nonatomic) GPBBoolArray *boolArrayValArray;
@property (readonly, nonatomic) unsigned long long boolArrayValArray_Count;
@property (retain, nonatomic) GPBDoubleArray *float64ArrayValArray;
@property (readonly, nonatomic) unsigned long long float64ArrayValArray_Count;

+ (id)descriptor;

@end
