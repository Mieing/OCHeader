@class NSString;

@interface BDWebImageCryptoKey : NSObject

@property (copy, nonatomic) NSString *asymmetricPublicKey;
@property (copy, nonatomic) NSString *symmetricKey;

- (void).cxx_destruct;

@end
