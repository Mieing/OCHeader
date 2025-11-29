@class NSString;

@interface LKSSOResponse : NSObject {
    void /* unknown type, empty encoding */ code;
    void /* unknown type, empty encoding */ codeVerifier;
}

@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly) NSString *codeVerifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ error;
@property (nonatomic, readonly) BOOL isSuccess;

- (void)safeHandleResultWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)safeHandleResultWithCodeVerifierWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
