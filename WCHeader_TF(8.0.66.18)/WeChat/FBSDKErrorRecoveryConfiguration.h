@class NSString, NSArray;

@interface FBSDKErrorRecoveryConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedRecoveryDescription;
@property (readonly, nonatomic) NSArray *localizedRecoveryOptionDescriptions;
@property (readonly, nonatomic) unsigned long long errorCategory;
@property (readonly, nonatomic) NSString *recoveryActionName;

- (id)initWithRecoveryDescription:(id)a0 optionDescriptions:(id)a1 category:(unsigned long long)a2 recoveryActionName:(id)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
