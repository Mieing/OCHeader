@class NSString;

@interface IESLiveLiveCreateQuestionContainerMethodImpl : IESLiveLiveCreateQuestionContainerMethod <IESHYHybridViewLifecycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadHybridWithURL:(id)a0 initialData:(id)a1;

@end
