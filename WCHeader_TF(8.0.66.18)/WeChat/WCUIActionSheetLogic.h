@class NSString, NSMutableDictionary;

@interface WCUIActionSheetLogic : MMObject <WCActionSheetDelegate> {
    NSMutableDictionary *m_dicTarget;
    NSMutableDictionary *m_dicSel;
    NSMutableDictionary *m_dicHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addBtnTitle:(id)a0 target:(id)a1 sel:(SEL)a2;
- (void)addBtnTitle:(id)a0 handler:(id /* block */)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
