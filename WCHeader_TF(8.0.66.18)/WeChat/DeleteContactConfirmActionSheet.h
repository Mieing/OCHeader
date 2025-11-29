@class UIButton, CContact;

@interface DeleteContactConfirmActionSheet : MMAutoLayoutSheetView

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) UIButton *checkBox;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (id)initWithContact:(id)a0;
- (void)initView;
- (id)getHeadingTitle;
- (id)getDescTitle;
- (id)getConfirmButtonTitle;
- (id)getClearAllMessageTitle;
- (id)genCheckBox;
- (id)genButtonStack;
- (void)onCheckBoxClicked:(id)a0;
- (void)onConfirm;
- (void).cxx_destruct;

@end
