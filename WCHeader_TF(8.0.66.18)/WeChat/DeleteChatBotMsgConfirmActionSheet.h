@class UIButton, CContact;

@interface DeleteChatBotMsgConfirmActionSheet : MMAutoLayoutSheetView

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) UIButton *checkBox;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ delSvrMsgUpdate;

- (id)initWithContact:(id)a0;
- (void)initView;
- (void)onCheckBoxClicked:(id)a0;
- (void)onConfirm;
- (void).cxx_destruct;

@end
