@class NSArray;
@protocol AWEPassportErrorHandlerImplProtocol;

@interface AWEPassportErrorHandler : NSObject

@property (copy, nonatomic) NSArray *codeList;
@property (nonatomic) BOOL totalSwitch;
@property (retain, nonatomic) id<AWEPassportErrorHandlerImplProtocol> implementation;

+ (id)sharedInstance;

- (void)registerErrorHandler;
- (BOOL)canInterceptSafeErrorCode:(long long)a0;
- (void)configSafeErrorCodeABValueWithCodeList:(id)a0 totalSwitch:(BOOL)a1;
- (void)handleError:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
