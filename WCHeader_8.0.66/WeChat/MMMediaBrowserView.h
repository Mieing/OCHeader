@protocol MMMediaBrowserViewModel, MMMediaBrowserViewDelegate;

@interface MMMediaBrowserView : UIView

@property (readonly, nonatomic) id<MMMediaBrowserViewModel> viewModel;
@property (weak, nonatomic) id<MMMediaBrowserViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDisplayFrame;
- (void)startDisplay;
- (void)downloadAllDataWithComplete:(id /* block */)a0;
- (BOOL)canShowLivePhotoBtn;
- (void).cxx_destruct;

@end
