@interface AWESearchTopBarFeedController : AWESearchTopBarBaseController

- (BOOL)enableSearchBigMode;
- (BOOL)isScanButtonShown;
- (id)searchScanElement;
- (void)scanElementDidClicked;
- (void)setupCustomTopBarElements;
- (BOOL)enableUseTextField;
- (void)setClearTextElementHidden:(BOOL)a0;
- (void)updateMagnifierHidden:(BOOL)a0;
- (BOOL)enableFixMarginLayout;
- (id)initWithContext:(id)a0;

@end
