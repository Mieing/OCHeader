@class AWEProgressLoadingView;

@interface AWEShareCommonTask : AWEShareBaseTask

@property (retain, nonatomic) AWEProgressLoadingView *loadingView;

- (void)dismissLoadingView;
- (id)allStages;
- (void)prepareWithChannel:(id)a0 inView:(id)a1;
- (id)allCustomStages;
- (void)shareStageWillBecomeModal:(id)a0;
- (void)didFinishPreparingWithSuccess:(BOOL)a0;
- (void)executeImmediately;
- (void).cxx_destruct;
- (void)finishWithResult:(unsigned long long)a0 error:(id)a1;
- (void)showLoadingView;

@end
