@class NSData;

@interface CJPayTouchIDEvaluatePolicyData : NSObject

@property (nonatomic) BOOL isLockOut;
@property (nonatomic) BOOL isBiometryNotAvailable;
@property (nonatomic) BOOL isTouchIDNotEnrolled;
@property (nonatomic) unsigned long long currentSupportBiopaymentType;
@property (retain, nonatomic) NSData *evaluatedPolicyDomainState;
@property (nonatomic) long long originBiometryType;

- (void).cxx_destruct;

@end
