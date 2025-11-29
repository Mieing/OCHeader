@class NSString, LSIMCardLoadingView, LSIMLynxView;
@protocol LSIMLynxModelProtocol;

@interface LSIMMessageLynxCellView : LSIMChatDetailBaseCellView <LSIMCardLoadingViewDelegate, LSIMLynxViewDelegate>

@property (nonatomic) long long errorCount;
@property (retain, nonatomic) LSIMLynxView *lynxView;
@property (retain, nonatomic) id<LSIMLynxModelProtocol> lynxModel;
@property (retain, nonatomic) LSIMCardLoadingView *loadingView;
@property (nonatomic) BOOL isConfigChange;
@property (nonatomic) BOOL firstCreateLynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxViewDidStartLoading:(id)a0;
- (void)lynxViewDidUpdate:(id)a0;
- (void)lynxView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)lynxView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)lynxView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)retryDidTapped;
- (void)configWithCellVM:(id)a0;
- (void)updateLynxViewData:(BOOL)a0;
- (void)setupContainerView;
- (void).cxx_destruct;

@end
