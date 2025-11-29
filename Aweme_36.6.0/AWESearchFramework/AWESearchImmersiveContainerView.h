@class NSString, AWESearchImmersiveModel, UIView;
@protocol AWESearchImmersiveContainerViewDelegate, AWESearchImmersiveViewProtocol;

@interface AWESearchImmersiveContainerView : UIView

@property (retain, nonatomic) AWESearchImmersiveModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIView<AWESearchImmersiveViewProtocol> *immersiveView;
@property (weak, nonatomic) UIView *immersiveCoverView;
@property (weak, nonatomic) id<AWESearchImmersiveContainerViewDelegate> delegate;
@property (retain, nonatomic) NSString *searchID;

- (void)hostContentOffset:(double)a0;
- (void)didRenderCompletion;
- (void)searchImmersiveBanner:(id)a0;
- (void)searchImmersiveTransToBottom:(id)a0;
- (void)searchImmersiveOpenVideo:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)didResignActive;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
