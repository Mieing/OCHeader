@class AFDButton, AFDTextField, NSString, AWERelationSheetSectionView, AWEUserModel;

@interface AWERelationSheetRemarkSection : AWERelationSheetBaseSection <UITextFieldDelegate>

@property (retain, nonatomic) AFDTextField *textField;
@property (retain, nonatomic) AFDButton *fillButton;
@property (retain, nonatomic) AWERelationSheetSectionView *sectionView;
@property (nonatomic) BOOL shouldAutoFillNickname;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSString *mateApplyMsg;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ returnBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitChanges:(id /* block */)a0;
- (void)sectionViewDidLoad;
- (void)p_fillRemark;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;

@end
