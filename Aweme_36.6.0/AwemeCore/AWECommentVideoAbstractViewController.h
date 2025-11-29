@interface AWECommentVideoAbstractViewController : AWECommentSwiftBizUI.CommentVCHeaderContainerBasicViewController {
    void /* unknown type, empty encoding */ videoAbstractViewComponent;
    void /* unknown type, empty encoding */ startShowTime;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ hasReport;
    void /* unknown type, empty encoding */ lastRootViewWidth;
    void /* unknown type, empty encoding */ countComponent;
}

- (BOOL)needShowViewByModel:(id)a0;
- (id)createViewByModel:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
