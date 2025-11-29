@class AWEUIKitViewControllerEmptyPageConfig;
@protocol AWEExceptionContainerViewControllerDelegate;

@interface AWEExceptionContainerViewController : UIViewController

@property (retain, nonatomic) AWEUIKitViewControllerEmptyPageConfig *customConfig;
@property (weak, nonatomic) id<AWEExceptionContainerViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long state;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
