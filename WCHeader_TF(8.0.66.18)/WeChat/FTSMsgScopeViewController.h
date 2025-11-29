@class NSString, FTSMsgScopeView;
@protocol FTSMsgScopeViewControllerDelegate;

@interface FTSMsgScopeViewController : FTSBaseViewController <UITextFieldDelegate, FTSResultPage>

@property (retain, nonatomic) FTSMsgScopeView *msgScopeView;
@property (weak, nonatomic) id<FTSMsgScopeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)onNavigationCancelItemClick;
- (void)reloadList;
- (id)searchBarText;
- (void)setSearchBarText:(id)a0 isReplace:(BOOL)a1;
- (id)searchTextField;
- (void)resignSearchFirstResponder;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)onTextFieldChanged:(id)a0;
- (BOOL)searchBarHasTagInfo;
- (void).cxx_destruct;

@end
