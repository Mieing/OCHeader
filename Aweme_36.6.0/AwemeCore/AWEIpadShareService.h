@class NSString;

@interface AWEIpadShareService : HTSService <AWEIpadShareService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remakeTitleViewMas:(id)a0 containerView:(id)a1 centerOffset:(double)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;
- (void)remakeViewMas:(id /* block */)a0;
- (id)IPadIMShareMultiSelectViewControllerWithMutiselectViewControllerConfig:(id)a0 sharePanelContainer:(id)a1;
- (BOOL)dismissView:(id)a0 completion:(id /* block */)a1;
- (double)shareIMSeprateLineRightMargin;
- (id)showPanelWithTask:(id)a0 shareButton:(id)a1 presenterVC:(id)a2;
- (id)IPadIMShareMultiSelectViewControllerWithContext:(id)a0 shareModels:(id)a1 dataSource:(id)a2 isBGColorWhite:(BOOL)a3 titleAttributedText:(id)a4 hasMore:(BOOL)a5 sharePanleContainer:(id)a6;
- (void)performUpdatePureModeWithBlock:(id /* block */)a0;

@end
