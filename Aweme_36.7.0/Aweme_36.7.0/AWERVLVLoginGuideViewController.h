@class NSString, DUXVacantView, UIScrollView, AWERVDetailPageContext;

@interface AWERVLVLoginGuideViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) DUXVacantView *vacantView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) id /* block */ scrollViewDidScroll;
@property (copy, nonatomic) id /* block */ loginCompletion;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requireLogin;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
