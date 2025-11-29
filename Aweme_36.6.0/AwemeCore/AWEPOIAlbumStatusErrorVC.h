@interface AWEPOIAlbumStatusErrorVC : UIViewController

@property (copy, nonatomic) id /* block */ retryAction;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)aweui_emptyPageBelowView;
- (id)initWithDarkMode:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
