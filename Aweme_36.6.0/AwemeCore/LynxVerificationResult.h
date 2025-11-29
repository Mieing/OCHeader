@class NSString;

@interface LynxVerificationResult : NSObject

@property (nonatomic) BOOL verified;
@property (copy, nonatomic) NSString *errorMsg;

- (void).cxx_destruct;

@end
