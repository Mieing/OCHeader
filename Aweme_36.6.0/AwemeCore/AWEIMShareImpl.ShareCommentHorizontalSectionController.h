@interface AWEIMShareImpl.ShareCommentHorizontalSectionController : AWEBaseListSectionController <AWEIMShareContactListDelegate, AWEIMShareAdditionTextViewUIDelegate> {
    void /* unknown type, empty encoding */ dismissView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ additionTextBackgroundView;
    void /* unknown type, empty encoding */ panelDefaultHeight;
    void /* unknown type, empty encoding */ additionTextViewTopConstraint;
    void /* unknown type, empty encoding */ additionTextViewBottomConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareContactList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trackIDGenerator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trackCommonParams;
}

- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (void)shareContactList:(id)a0 stateDidChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (id)trackCommonParamsWithShareContactList:(id)a0;
- (id)createAdditionTextAndAppendToViewHierarchyWithShareContactList:(id)a0;
- (void)shareContactList:(id)a0 additionTextViewDismissed:(id)a1;
- (void)textView:(id)a0 bottomViewDidShow:(BOOL)a1 keyboardHeight:(double)a2 additionTextViewNormalHeight:(double)a3 animateSheetHeight:(BOOL)a4;
- (void)textView:(id)a0 didChangeMinHeight:(double)a1 keyboardHeight:(double)a2;
- (void)trackDidClickEmojiBtn;
- (void)dismissViewDidTap:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;

@end
