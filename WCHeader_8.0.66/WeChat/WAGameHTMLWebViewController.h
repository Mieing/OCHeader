@interface WAGameHTMLWebViewController : WAHTMLWebViewController

- (id)initWithURL:(id)a0 extraInfo:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)webViewControllerDidFinishLoad:(id)a0;
- (BOOL)allowsAutoMediaPlay;
- (void)initAddressBarLabel;

@end
