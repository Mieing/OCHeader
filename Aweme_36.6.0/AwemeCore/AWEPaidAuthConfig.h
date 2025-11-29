@class NSString, NSNumber, NSArray;

@interface AWEPaidAuthConfig : NSObject

@property (nonatomic) long long paidScene;
@property (nonatomic) unsigned long long paidLaunchSource;
@property (nonatomic) unsigned long long authStatus;
@property (nonatomic) long long supportPaymentType;
@property (nonatomic) unsigned long long freeTrialTimeType;
@property (nonatomic) double freeTrialledNaturalTimeInterval;
@property (nonatomic) double freeTrialMaxNaturalTimeInterval;
@property (nonatomic) double freeTrialStartTimeInterval;
@property (nonatomic) double freeTrialEndTimeInterval;
@property (copy, nonatomic) NSString *parentContentID;
@property (copy, nonatomic) NSString *fromContentID;
@property (retain, nonatomic) NSNumber *currentEpisode;
@property (copy, nonatomic) NSArray *authIAAItems;
@property (copy, nonatomic) NSArray *authIAPItems;
@property (copy, nonatomic) NSArray *authVIPItems;
@property (copy, nonatomic) NSArray *authPreItems;
@property (nonatomic) double watchDurationRemainingTimeInterval;
@property (nonatomic) BOOL initialDataReady;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *certificate;
@property (retain, nonatomic) NSNumber *timestampP;
@property (retain, nonatomic) NSNumber *rit;
@property (copy, nonatomic) NSString *creatorID;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) unsigned long long strategyType;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL isLogin;
@property (copy, nonatomic) NSString *creatorType;
@property (retain, nonatomic) NSNumber *unlockNum;
@property (retain, nonatomic) NSNumber *additionalNum;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *skuId;
@property (nonatomic) long long bizType;

- (void).cxx_destruct;

@end
