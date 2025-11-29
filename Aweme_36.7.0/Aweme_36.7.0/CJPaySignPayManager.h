@class NSString, CJPayNavigationController;

@interface CJPaySignPayManager : NSObject <CJPaySignDYPayModule>

@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (nonatomic) BOOL isSignOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedInstance;

- (BOOL)wakeByUniversalPayDesk:(id)a0 withDelegate:(id)a1;
- (void)i_signAndPayWithDataDict:(id)a0 delegate:(id)a1;
- (void)i_signOnlyWithDataDict:(id)a0 delegate:(id)a1;
- (void)i_requestSignAndPayInfoWithBizParams:(id)a0 completion:(id /* block */)a1;
- (void)i_requestSignOnlyInfoWithBizParams:(id)a0 completion:(id /* block */)a1;
- (void)p_callBackWithSignResult:(unsigned long long)a0 delegate:(id)a1;
- (long long)p_signTypeWithSignStr:(id)a0;
- (void)p_dismissSelfWithDYPayResultType:(unsigned long long)a0 delegate:(id)a1;
- (void)p_callSuccessWithDelegate:(id)a0;
- (void)p_signDYPayActionWithDataDict:(id)a0 delegate:(id)a1;
- (void)p_signOnlyWithDataDict:(id)a0 delegate:(id)a1;
- (void)p_innerSignOnlyWithDict:(id)a0 withDelegate:(id)a1;
- (void).cxx_destruct;

@end
