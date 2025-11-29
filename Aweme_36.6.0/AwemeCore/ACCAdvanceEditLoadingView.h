@class NSString, UIView;
@protocol ACCProcessViewProtcol;

@interface ACCAdvanceEditLoadingView : NSObject <DVELoadingViewProtocol>

@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showMessage:(id)a0 afterDele:(double)a1;
- (void)showMessageForLoadingView:(id)a0;
- (void)setProgressLableWithText:(id)a0 Progress:(double)a1 CancelBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)showMessage:(id)a0;
- (void)hideProgress;
- (void)showProgress;

@end
