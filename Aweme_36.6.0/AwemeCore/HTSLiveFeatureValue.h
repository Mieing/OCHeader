@class NSString, NSMutableDictionary, GPBBoolArray, GPBInt64Array, NSMutableArray, GPBDoubleArray;

@interface HTSLiveFeatureValue : IESLivePBBaseMessage

@property (nonatomic) int valType;
@property (nonatomic) long long int64Val;
@property (nonatomic) BOOL boolVal;
@property (nonatomic) double float64Val;
@property (copy, nonatomic) NSString *stringVal;
@property (retain, nonatomic) NSMutableDictionary *mapVal;
@property (readonly, nonatomic) unsigned long long mapVal_Count;
@property (retain, nonatomic) GPBInt64Array *int64ArrayValArray;
@property (readonly, nonatomic) unsigned long long int64ArrayValArray_Count;
@property (retain, nonatomic) NSMutableArray *stringArrayValArray;
@property (readonly, nonatomic) unsigned long long stringArrayValArray_Count;
@property (retain, nonatomic) GPBBoolArray *boolArrayValArray;
@property (readonly, nonatomic) unsigned long long boolArrayValArray_Count;
@property (retain, nonatomic) GPBDoubleArray *float64ArrayValArray;
@property (readonly, nonatomic) unsigned long long float64ArrayValArray_Count;

+ (id)descriptor;

- (long long)int64Val;
- (int)valType;

@end
