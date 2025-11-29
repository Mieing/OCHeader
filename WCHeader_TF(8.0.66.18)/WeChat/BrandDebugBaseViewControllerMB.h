@class WCUIAlertView, BrandDebugCenterConfigMgr, UIScrollView, NSMutableArray;

@interface BrandDebugBaseViewControllerMB : MMUIViewController {
    NSMutableArray *m_itemViewArr;
    NSMutableArray *m_debugItemArr;
    UIScrollView *m_scrollView;
    double m_offsetY;
    double m_leftMargin;
    double m_itemHeight;
}

@property (retain, nonatomic) BrandDebugCenterConfigMgr *configMgr;
@property (retain, nonatomic) WCUIAlertView *alertView;

- (id)init;
- (void)viewDidLoad;
- (void)initNavigationBarItem;
- (void)onReturn;
- (void)onOperate;
- (void)initSubviews;
- (void)addItemButtonWithTitle:(id)a0 action:(SEL)a1;
- (void)updateScrollViewContentSize;
- (void)addSimpleOptionItemForABTest:(id)a0 wordingForYES:(id)a1 wordingForNO:(id)a2 exptKey:(id)a3 configType:(unsigned int)a4;
- (void)addSimpleOptionItemForABTest:(id)a0 wordingForYES:(id)a1 wordingForNO:(id)a2 exptKey:(id)a3 configType:(unsigned int)a4 hasDefaultOption:(BOOL)a5;
- (void)addSimpleOptionItemForABTest:(id)a0 wordingForYES:(id)a1 wordingForNO:(id)a2 exptKey:(id)a3 configType:(unsigned int)a4 hasDefaultOption:(BOOL)a5 disable:(BOOL)a6;
- (void)addSimpleOptionItemForABTest:(id)a0 wordingForYES:(id)a1 wordingForNO:(id)a2 exptKey:(id)a3 configType:(unsigned int)a4 hasDefaultOption:(BOOL)a5 disable:(BOOL)a6 callback:(id /* block */)a7;
- (void)addHeaderTitle:(id)a0;
- (void)showInputViewWithTitle:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;

@end
