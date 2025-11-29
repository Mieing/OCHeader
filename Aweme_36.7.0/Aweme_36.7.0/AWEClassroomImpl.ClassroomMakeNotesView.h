@interface AWEClassroomImpl.ClassroomMakeNotesView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UITextViewDelegate> {
    void /* unknown type, empty encoding */ lesson;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingToast;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomAreaView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolbarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_picCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_notesModel;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ finalTextHeight;
    void /* unknown type, empty encoding */ shouldPublicSelected;
    void /* unknown type, empty encoding */ currentProgress;
    void /* unknown type, empty encoding */ textHeight;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ keyboardIsShowing;
    void /* unknown type, empty encoding */ imageUriList;
    void /* unknown type, empty encoding */ authDuration;
    void /* unknown type, empty encoding */ uploadDuration;
    void /* unknown type, empty encoding */ publishDuration;
    void /* unknown type, empty encoding */ authStatus;
    void /* unknown type, empty encoding */ uploadStatus;
    void /* unknown type, empty encoding */ publishStatus;
    void /* unknown type, empty encoding */ exitNoteAlert;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)keyboardWillShowWithNotification:(id)a0;
- (void)keyboardWillHideWithNotification:(id)a0;
- (void)keyboardWillChangeFrameWithNotification:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)handleBackButton;
- (void)handleDoneButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
