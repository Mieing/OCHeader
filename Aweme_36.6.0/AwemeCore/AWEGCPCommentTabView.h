@class UIScrollView, AWEGCPCommentTabViewModel, NSString;
@protocol AWEGCPCommentTabViewDelegate, IESGCPLynxCardViewProtocol;

@interface AWEGCPCommentTabView : UIView <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) id<IESGCPLynxCardViewProtocol> lynxCardView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AWEGCPCommentTabViewModel *viewModel;
@property (retain, nonatomic) NSString *schema;
@property (weak, nonatomic) id<AWEGCPCommentTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidPageUpdate;
- (id)initialData;
- (void)commentThemeChanged;
- (void)setupWithSchema:(id)a0;
- (id)getProcessGestureWithView;
- (void).cxx_destruct;
- (id)init;

@end
