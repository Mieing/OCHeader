@class NSString, CAShapeLayer, NSProgress, UIView, UILabel, UIButton;

@interface AWEGCPXPlayShareDownloadViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL hasAcquireFileSize;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickCloseButton;
- (void)updateDownloadSize:(long long)a0;
- (void)_createLoadingProcess;
- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)addObserver;
- (void)setup;
- (void)show;
- (void)dismiss:(id /* block */)a0;

@end
