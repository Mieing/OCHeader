@class NSString, NSDecimalNumber, NSDate;

@interface SimplePKPass : NSObject

@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (retain, nonatomic) NSString *deviceAccountIdentifier;
@property (retain, nonatomic) NSString *deviceAccountNumberSuffix;
@property (nonatomic) unsigned int passActivationState;
@property (copy, nonatomic) NSString *devicePassIdentifier;
@property (copy, nonatomic) NSString *pairedTerminalIdentifier;
@property (nonatomic) BOOL isRemotePass;
@property (copy, nonatomic) NSDecimalNumber *transitBalance;
@property (copy, nonatomic) NSString *transitBalanceCurrencyCode;
@property (nonatomic) BOOL isInStation;
@property (nonatomic) BOOL isBlacklisted;
@property (copy, nonatomic) NSDate *expirationDate;

- (id)initWithPKPass:(id)a0 withBalance:(BOOL)a1;
- (void).cxx_destruct;

@end
