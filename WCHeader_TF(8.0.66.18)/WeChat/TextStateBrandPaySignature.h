@class NSString;

@interface TextStateBrandPaySignature : TextStateBrandBaseSignature

@property (retain, nonatomic) NSString *payTransactionId;
@property (retain, nonatomic) NSString *paySignature;

- (id)businessInfo;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
