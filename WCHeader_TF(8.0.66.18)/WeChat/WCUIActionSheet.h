@class WCUIActionSheetLogic;

@interface WCUIActionSheet : WCActionSheet {
    WCUIActionSheetLogic *logic;
}

@property (retain, nonatomic) id m_userData;

- (id)init;
- (id)initWithTitle:(id)a0;
- (void)addBtnTitle:(id)a0 target:(id)a1 sel:(SEL)a2;
- (void)addCancelBtnTitle:(id)a0 target:(id)a1 sel:(SEL)a2;
- (void)addCancelBtnTitle:(id)a0 handler:(id /* block */)a1;
- (void)addDestructiveButtonTitle:(id)a0 target:(id)a1 sel:(SEL)a2;
- (void)addBtnTitle:(id)a0 handler:(id /* block */)a1;
- (void)addDestructiveButtonTitle:(id)a0 handler:(id /* block */)a1;
- (void)addCustomViewWithItem:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;

@end
