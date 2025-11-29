@class NSString;

@interface IESIMActionSheetService : HTSService <IESIMActionSheetService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createActionSheet;
- (id)createActionSheetWithActions:(id)a0 cancelHandler:(id /* block */)a1;
- (id)actionWithTitle:(id)a0 icon:(id)a1 handler:(id /* block */)a2;
- (id)actionWithTitle:(id)a0 style:(unsigned long long)a1 icon:(id)a2 handler:(id /* block */)a3;
- (id)actionWithContentView:(id)a0 handler:(id /* block */)a1;
- (id)actionWithContentView:(id)a0 disableAnimation:(BOOL)a1 handler:(id /* block */)a2;
- (id)doubleCheckActionSheetWithTitle:(id)a0 deleteHandler:(id /* block */)a1 cancelHandler:(id /* block */)a2;
- (id)doubleCheckActionSheetWithTitle:(id)a0 confirmTitle:(id)a1 confirmHandler:(id /* block */)a2 cancelHandler:(id /* block */)a3;
- (id)popoverActionSheetWithAlignmentMode:(long long)a0;
- (id)createStandardAction;
- (id)standardActionSheetWithHostVC:(id)a0 title:(id)a1 subtitle:(id)a2 actions:(id)a3 delegate:(id)a4;
- (id)standardActionSheetWithHostVC:(id)a0 title:(id)a1 subtitle:(id)a2 optionType:(long long)a3 actions:(id)a4 delegate:(id)a5;
- (id)standardActionSheetWithHostVC:(id)a0 title:(id)a1 subtitle:(id)a2 actions:(id)a3 delegate:(id)a4 enlargeType:(unsigned long long)a5;
- (id)standardActionWithTitle:(id)a0 subtitle:(id)a1 style:(unsigned long long)a2 handler:(id /* block */)a3;
- (Class)actionSheetPresentViewControllerClass;
- (id)doubleCheckActionSheetWithTitle:(id)a0 confirmTitle:(id)a1 confirmHandler:(id /* block */)a2 cancelHandler:(id /* block */)a3 confirmSheetStyle:(unsigned long long)a4;
- (unsigned long long)p_aweUserSheetActionStyleWithIESIMStyle:(unsigned long long)a0;
- (long long)p_duxActionSheetTypeWithIESIMType:(long long)a0;

@end
