@class UIScrollView, AWEUserModel, NSString;
@protocol AWEPrivateAccountInfoViewControllerDelegate;

@interface AWEPrivateAccountInfoViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<AWEPrivateAccountInfoViewControllerDelegate> delegate;
@property (weak, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSString *teenModeTitle;
@property (retain, nonatomic) NSString *teenModeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)updateUI;

@end
