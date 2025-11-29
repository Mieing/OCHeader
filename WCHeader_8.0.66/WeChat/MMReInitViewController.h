@class NSString, UIScrollView;

@interface MMReInitViewController : MMUIViewController <MMTipsViewControllerDelegate> {
    UIScrollView *m_mainScrollView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)onReinit;
- (void)doReinit;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)OnClickBackBarButton:(id)a0;
- (void).cxx_destruct;

@end
