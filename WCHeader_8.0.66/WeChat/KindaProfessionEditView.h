@class WCPayGetProfessionItem, NSString, NSArray, UITextField, MMKProfessionEditViewOnSelectProfessionCallback, WCPayProfession, NSMutableArray;

@interface KindaProfessionEditView : KindaView <UITextFieldDelegate, WCPayGetProfessionViewControllerDelegate, MMKProfessionEditView> {
    NSArray *professions;
    WCPayProfession *_profession;
    WCPayGetProfessionItem *item;
    UITextField *m_view;
    NSMutableArray *m_profession_list;
    MMKProfessionEditViewOnSelectProfessionCallback *m_callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)getProfessionViewController:(id)a0 didSelectedProfession:(id)a1;
- (id)getProfessionName;
- (int)getProfessionType;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)setData:(id)a0;
- (void)setOnSelectProfessionCallback:(id)a0;
- (void)setDefaultProfession:(int)a0 name:(id)a1;
- (void).cxx_destruct;

@end
