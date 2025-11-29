@class GPBInt64Array;

@interface GalileoPadTextcropStructV2 : GPBMessage

@property (retain, nonatomic) GPBInt64Array *ipadDHCutRatioArray;
@property (readonly, nonatomic) unsigned long long ipadDHCutRatioArray_Count;
@property (retain, nonatomic) GPBInt64Array *ipadDVCutRatioArray;
@property (readonly, nonatomic) unsigned long long ipadDVCutRatioArray_Count;
@property (retain, nonatomic) GPBInt64Array *androidDHCutRatioArray;
@property (readonly, nonatomic) unsigned long long androidDHCutRatioArray_Count;
@property (retain, nonatomic) GPBInt64Array *androidDVCutRatioArray;
@property (readonly, nonatomic) unsigned long long androidDVCutRatioArray_Count;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) GPBInt64Array *pcBlockedAreaRatioArray;
@property (readonly, nonatomic) unsigned long long pcBlockedAreaRatioArray_Count;

+ (id)descriptor;

@end
