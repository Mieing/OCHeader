@protocol ACCTextLoadingViewProtcol;

@interface ACCPropLoadedView : UIView

@property (retain, nonatomic) id<ACCTextLoadingViewProtcol> loadingView;
@property (nonatomic) BOOL isShowing;

- (void)startLoadingWithTitle:(id)a0 onView:(id)a1 closeBlock:(id /* block */)a2;
- (void)updateProgressTitle:(id)a0;
- (void).cxx_destruct;
- (void)stopLoading;

@end
