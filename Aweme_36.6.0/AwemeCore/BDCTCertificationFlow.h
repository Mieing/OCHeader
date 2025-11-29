@class UIViewController;

@interface BDCTCertificationFlow : BDCTFlow

@property (nonatomic) BOOL isFinished;
@property (weak, nonatomic) UIViewController *webViewController;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)openXContainerWithURL:(id)a0;
- (id)anniexSchemeWithURL:(id)a0;
- (void)openCertificationUrl:(id)a0;
- (void)finishFlowWithParams:(id)a0 progressType:(unsigned long long)a1;
- (void)finishWithResult:(id)a0 progressType:(unsigned long long)a1;
- (void)finishWithResult:(id)a0 progressType:(unsigned long long)a1 showAlert:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)begin;
- (void)dealloc;

@end
