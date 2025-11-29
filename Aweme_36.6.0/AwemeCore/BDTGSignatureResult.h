@class NSData, NSError, NSString;

@interface BDTGSignatureResult : NSObject

@property (copy, nonatomic) NSData *signature;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int attemptCount;
@property (copy, nonatomic) NSString *keyType;

- (void).cxx_destruct;

@end
