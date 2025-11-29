@class MMToastView, NSString;

@interface MMLoadingView : UIView

@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL previousLoading;
@property (retain, nonatomic) MMToastView *loadingView;
@property (nonatomic) double toastDuration;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL shouldResumeInteraction;
@property (nonatomic) BOOL ignoreInteractionEventsWhenLoading;
@property (nonatomic) struct CGPoint { double x; double y; } showCenter;
@property (retain, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)startLoading;
- (void)startLoadingAfterDelay:(double)a0;
- (void)stopLoading;
- (void)stopLoadingAndShowOK:(id)a0;
- (void)stopLoadingAndShowOK:(id)a0 duration:(double)a1;
- (void)stopLoadingAndShowOK:(id)a0 duration:(double)a1 completionBlock:(id /* block */)a2;
- (void)stopLoadingAndShowError:(id)a0;
- (void)stopLoadingAndShowError:(id)a0 duration:(double)a1;
- (void)stopLoadingAndShowError:(id)a0 duration:(double)a1 completionBlock:(id /* block */)a2;
- (void)stopLoadingAndShowIcon:(id)a0 text:(id)a1 duration:(double)a2;
- (void)stopLoadingAndShowIcon:(id)a0 text:(id)a1 duration:(double)a2 completionBlock:(id /* block */)a3;
- (void)updateLayout;
- (void)showLoadingView;
- (void)privateStopLoading;
- (void)privateCheckLoadingAction;
- (void)privateEndToast;
- (void)privateRealStartLoading;
- (void)privateRealStopLoading;
- (id)privateText;
- (void)privateCheckLoadingViewCenter;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
