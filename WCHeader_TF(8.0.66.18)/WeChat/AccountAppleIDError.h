@class AccountErrorInfo;

@interface AccountAppleIDError : NSObject

@property (nonatomic) long long returnCode;
@property (retain, nonatomic) AccountErrorInfo *errorInfo;

- (void).cxx_destruct;

@end
