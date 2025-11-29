@protocol AWESetDefaultEmptyPageDelegate;

@interface AWEEmptyPageSectionInnerViewController : UIViewController

@property (weak, nonatomic) id<AWESetDefaultEmptyPageDelegate> delegate;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void).cxx_destruct;

@end
