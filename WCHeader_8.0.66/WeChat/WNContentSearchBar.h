@class MMUITextField, NSString, MMUIButton, MMUILabel;
@protocol WNContentSearchBarDelegate, WNContentSearchBaroperationDelegate;

@interface WNContentSearchBar : UIView <UITextFieldDelegate> {
    MMUITextField *m_searchField;
    MMUILabel *m_resultLable;
    MMUIButton *m_cancelBtn;
    MMUIButton *m_preResultBtn;
    MMUIButton *m_nextResultBtn;
    unsigned long long m_atIndex;
    unsigned long long m_totalCount;
}

@property (weak, nonatomic) id<WNContentSearchBarDelegate> delegate;
@property (weak, nonatomic) id<WNContentSearchBaroperationDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)updateResultLableAt:(unsigned long long)a0 total:(unsigned long long)a1;
- (void)clearResultLable;
- (void)onCancel:(id)a0;
- (void)onClickPreKeyBtn:(id)a0;
- (void)onClickNextKeyBtn:(id)a0;
- (void)searchFieldBecomFirstResponder;
- (void)searchFieldResignFirstResponder;
- (void)realDoSearchWith:(id)a0;
- (void)tryToSearchWith:(id)a0 immediately:(BOOL)a1;
- (void)cancelSearch;
- (void)changeWidth:(double)a0 with:(double)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidChange:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void).cxx_destruct;

@end
