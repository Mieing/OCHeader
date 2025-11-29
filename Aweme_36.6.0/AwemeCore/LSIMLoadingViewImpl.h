@class NSString, AWEUILoadingView;

@interface LSIMLoadingViewImpl : UIView <LSIMLoadingViewProtocol>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)showLoadingViewOnView:(id)a0 animated:(BOOL)a1;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;

@end
