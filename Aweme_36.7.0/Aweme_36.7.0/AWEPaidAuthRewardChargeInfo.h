@class NSString, NSArray, AWEPaidStreamIAAUIConfig;

@interface AWEPaidAuthRewardChargeInfo : NSObject

@property (copy, nonatomic) NSString *adAwardKey;
@property (copy, nonatomic) NSArray *IAAAwardInfos;
@property (retain, nonatomic) AWEPaidStreamIAAUIConfig *awardUIConfig;

- (void).cxx_destruct;

@end
