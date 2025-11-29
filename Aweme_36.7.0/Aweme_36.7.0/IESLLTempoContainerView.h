@class IESLLTempoUIView, NSString;
@protocol IESLLTempoContainerViewLifecycleDelegate;

@interface IESLLTempoContainerView : UIView <IESLLTempoUIViewLifecycleDelegate, IESLLTempoContainerProtocol>

@property (retain, nonatomic) IESLLTempoUIView *tempoView;
@property (copy, nonatomic) NSString *nodeTag;
@property (copy, nonatomic) NSString *containerID;
@property (weak, nonatomic) id<IESLLTempoContainerViewLifecycleDelegate> lifecycleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewWithIdSelector:(id)a0;
- (void)loadAnimation;
- (void)sendEvent:(id)a0 params:(id)a1 isSticky:(BOOL)a2;
- (void)loadData:(id)a0 globalProps:(id)a1;
- (void)registerExprFunc:(id)a0;
- (void)preloadData:(id)a0 globalProps:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configModel:(id)a1;
- (void)refreshBadgeViewMsg:(id)a0;
- (void)tempoUIView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)tempoUIView:(id)a0 didPreloadSuccessWithURL:(id)a1;
- (void)tempoUIView:(id)a0 didLoadSuccessWithURL:(id)a1;
- (void)tempoUIView:(id)a0 didUpdateSuccessWithURL:(id)a1;
- (void)tempoUIView:(id)a0 didLoadFailureWithURL:(id)a1 error:(id)a2;
- (void)tempoUIView:(id)a0 didReceiveError:(id)a1;
- (void)tempoUIView:(id)a0 timingInfo:(id)a1;
- (void)tempoUIView:(id)a0 consoleLog:(id)a1;
- (void)tempoUIView:(id)a0 refreshBadgeViewMsg:(id)a1;
- (void)updateData:(id)a0 globalProps:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
