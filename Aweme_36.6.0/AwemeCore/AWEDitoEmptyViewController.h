@class DitoPageContext;
@protocol AWEDitoEmptyPlaceholderDelegate;

@interface AWEDitoEmptyViewController : UIViewController

@property (weak, nonatomic) id<AWEDitoEmptyPlaceholderDelegate> delegate;
@property (weak, nonatomic) DitoPageContext *context;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)aweui_emptyPageBelowView;
- (void).cxx_destruct;

@end
