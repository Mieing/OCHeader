@class GPBInt32Array, NSString;

@interface AdSettingInfoV2 : GPBMessage

@property (retain, nonatomic) GPBInt32Array *midAdsIndexArray;
@property (readonly, nonatomic) unsigned long long midAdsIndexArray_Count;
@property (retain, nonatomic) GPBInt32Array *rewardedAdsIndexArray;
@property (readonly, nonatomic) unsigned long long rewardedAdsIndexArray_Count;
@property (copy, nonatomic) NSString *bizExtra;
@property (nonatomic) BOOL hasBizExtra;
@property (nonatomic) int rit;
@property (nonatomic) BOOL hasRit;

+ (id)descriptor;

@end
