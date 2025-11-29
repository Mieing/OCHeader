@class NSString, AWEPublishResultView, UIWindow;

@interface AWEPublishRetryViewModern : UIView <AWEPublishRetryViewProtocol>

@property (retain, nonatomic) AWEPublishResultView *resultView;
@property (retain, nonatomic) UIWindow *overlayWindow;
@property (copy, nonatomic) id /* block */ retryAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ panToDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss:(BOOL)a0 completion:(id /* block */)a1;
- (void)setCoverImage:(id)a0;
- (void)hideCloseButton;
- (void)setCoverImages:(id)a0;
- (id)initWithType:(unsigned long long)a0 title:(id)a1 subtitle:(id)a2 buttonTitle:(id)a3;
- (void)toggleRetryButton:(BOOL)a0;
- (void)indicatorButtonTapped;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)show;
- (void)handlePanGesture:(id)a0;
- (void)setCoverImageURL:(id)a0;
- (void)actionButtonTapped;

@end
