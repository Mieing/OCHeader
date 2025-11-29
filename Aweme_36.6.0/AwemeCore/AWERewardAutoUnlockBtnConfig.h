@class NSString;

@interface AWERewardAutoUnlockBtnConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *storageKey;
@property (nonatomic) long long second;
@property (copy, nonatomic) NSString *textSuffix;
@property (nonatomic) long long showFrequency;
@property (nonatomic) unsigned long long timingType;
@property (copy, nonatomic) NSString *vipBuySchema;
@property (nonatomic) long long hasShowCount;
@property (nonatomic) double autoUnlockTime;
@property (nonatomic) unsigned long long autoUnlockType;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableLaunchAutoUnlock;
- (void).cxx_destruct;

@end
