@class AFDTextField, NSString, AWERelationSheetSectionView, AWEUserModel;

@interface AWERelationSheetApplyMessageSection : AWERelationSheetBaseSection <UITextFieldDelegate>

@property (retain, nonatomic) AFDTextField *textField;
@property (retain, nonatomic) AWERelationSheetSectionView *sectionView;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *groupChatName;
@property (copy, nonatomic) NSString *groupChatAlias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitChanges:(id /* block */)a0;
- (id)applyMessageType;
- (void)sectionViewDidLoad;
- (id)p_autoFillApplyMessage;
- (id)p_applyMessageStorageKey;
- (id)lastApplyMessage;
- (id)defaultApplyMessage;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;

@end
