@class NSString, WCAdInteractionCoverInfo;

@interface WCAdShakeInfo : NSObject <NSCoding>

@property (retain, nonatomic) WCAdInteractionCoverInfo *coverInfo;
@property (nonatomic) double triggerGForce;
@property (retain, nonatomic) NSString *simpleTransitionAnimationUrl;
@property (retain, nonatomic) NSString *simpleTransitionAnimationMD5;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)isSimpleAnimationInfoValid;
- (void).cxx_destruct;

@end
