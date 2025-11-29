@class AWEChallengeModel, NSString, AWEPOICouponActivityModel;

@interface AWEPOIScanActivityInfo : NSObject

@property (retain, nonatomic) AWEPOICouponActivityModel *couponActivity;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (copy, nonatomic) NSString *stickerId;

- (BOOL)hasValidActivity;
- (void).cxx_destruct;

@end
