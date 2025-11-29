@class NSString;

@interface CJPayOuterSignLoadingViewController : CJPayOuterBaseViewController <CJPayAPIDelegate>

@property (nonatomic) BOOL isSignOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callState:(BOOL)a0 fromScene:(long long)a1;
- (void)onResponse:(id)a0;
- (void)didFinishParamsCheck:(BOOL)a0;
- (void)p_requestSignOnlySignInfo;
- (void)p_requestQuerySignInfo;
- (void)p_signAndPayWithResponse:(id)a0;

@end
