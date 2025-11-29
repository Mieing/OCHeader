@class NSString, UIView;
@protocol IESIMTextLoadingViewProtocol;

@interface AWEIMGroupAvatarCropViewController : TOCropViewController <TOCropViewControllerDelegate, AWEIMInAppPushProtocol, IESIMGroupAvatarCropViewControllerProtocol>

@property (retain, nonatomic) UIView<IESIMTextLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showAvatarCropWithImage:(id)a0 completionBlock:(id /* block */)a1;
+ (id)showAvatarCropWithImage:(id)a0 animation:(BOOL)a1 completionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;

- (BOOL)canShowInnerPush;
- (void)cropViewController:(id)a0 didCropToImage:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 angle:(long long)a3 button:(id)a4;
- (void)cropViewController:(id)a0 didFinishCancelled:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCropViewWithVerticalLayout:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
