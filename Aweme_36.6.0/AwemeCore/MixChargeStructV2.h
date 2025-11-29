@class NSString, GPBInt64Array;

@interface MixChargeStructV2 : GPBMessage

@property (nonatomic) int chargeType;
@property (nonatomic) BOOL hasChargeType;
@property (nonatomic) BOOL hasPaid_p;
@property (nonatomic) BOOL hasHasPaid_p;
@property (nonatomic) int chargeCount;
@property (nonatomic) BOOL hasChargeCount;
@property (nonatomic) int sellType;
@property (nonatomic) BOOL hasSellType;
@property (nonatomic) int unpaidCount;
@property (nonatomic) BOOL hasUnpaidCount;
@property (nonatomic) BOOL useDemotion;
@property (nonatomic) BOOL hasUseDemotion;
@property (copy, nonatomic) NSString *buySchema;
@property (nonatomic) BOOL hasBuySchema;
@property (nonatomic) long long promiseUpdateTime;
@property (nonatomic) BOOL hasPromiseUpdateTime;
@property (retain, nonatomic) GPBInt64Array *paidEpisodesArray;
@property (readonly, nonatomic) unsigned long long paidEpisodesArray_Count;
@property (retain, nonatomic) GPBInt64Array *chargeEpisodesArray;
@property (readonly, nonatomic) unsigned long long chargeEpisodesArray_Count;

+ (id)descriptor;

@end
