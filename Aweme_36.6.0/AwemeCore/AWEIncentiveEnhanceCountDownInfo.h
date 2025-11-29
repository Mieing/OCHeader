@class NSNumber, NSString;

@interface AWEIncentiveEnhanceCountDownInfo : NSObject

@property (nonatomic) BOOL isEnhancing;
@property (nonatomic) long long goldPendantCountDown;
@property (nonatomic) long long goldPendantCoinNum;
@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *goldPendantTreatment;

- (void).cxx_destruct;

@end
