@class NSString, WCAdFinderDialogBaseInfo, WCAdFinderDialogBaseView;
@protocol WCAdFinderDialogContainViewDelegate;

@interface WCAdFinderDialogContainView : UIScrollView <UIScrollViewDelegate, WCAdFinderDialogBaseViewDelegate>

@property (retain, nonatomic) WCAdFinderDialogBaseInfo *dialogInfo;
@property (retain, nonatomic) WCAdFinderDialogBaseView *dialogDetailView;
@property (weak, nonatomic) id<WCAdFinderDialogContainViewDelegate> containerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dialogInfo:(id)a1;
- (void)generateContentViews;
- (void)layoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)onDialogViewConfirmButtonClicked;
- (void).cxx_destruct;

@end
