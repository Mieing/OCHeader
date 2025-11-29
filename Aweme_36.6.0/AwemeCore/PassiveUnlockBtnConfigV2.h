@class NSString;

@interface PassiveUnlockBtnConfigV2 : GPBMessage

@property (nonatomic) int btnShowSecond;
@property (nonatomic) BOOL hasBtnShowSecond;
@property (copy, nonatomic) NSString *btnText;
@property (nonatomic) BOOL hasBtnText;
@property (nonatomic) int btnShowFrequency;
@property (nonatomic) BOOL hasBtnShowFrequency;
@property (nonatomic) int showSecondType;
@property (nonatomic) BOOL hasShowSecondType;
@property (copy, nonatomic) NSString *vipBuySchema;
@property (nonatomic) BOOL hasVipBuySchema;

+ (id)descriptor;

@end
