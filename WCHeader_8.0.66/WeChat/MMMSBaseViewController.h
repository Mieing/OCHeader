@class UIScrollView;

@interface MMMSBaseViewController : UIViewController {
    UIScrollView *m_contentView;
}

- (id)init;
- (void)viewDidLoad;
- (double)getContentViewY;
- (void)onBackBtnDone:(id)a0;
- (void).cxx_destruct;

@end
