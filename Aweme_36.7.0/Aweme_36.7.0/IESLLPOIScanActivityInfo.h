@class IESLLPOICouponActivityModel, NSString, AWEChallengeModel;

@interface IESLLPOIScanActivityInfo : NSObject

@property (retain, nonatomic) IESLLPOICouponActivityModel *couponActivity;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (copy, nonatomic) NSString *stickerId;

- (BOOL)hasValidActivity;
- (void).cxx_destruct;

@end
