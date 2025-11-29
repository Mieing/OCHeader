@interface AWEClassroomImpl.ClassroomHomeworkPublishViewController : UIViewController <AWERouterViewControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource, UITextViewDelegate> {
    void /* unknown type, empty encoding */ isSubmitButtonShowing;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ keyboardOffset;
    void /* unknown type, empty encoding */ isDismissing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_divider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_answerContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_exceededTextHintLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mediasCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_submitButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolbarView;
}

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)appDidEnterBackground;
- (void)keyboardWillChangeFrameWithNotification:(id)a0;
- (void)keyboardDidHideWithNotification:(id)a0;
- (void)submitAction;
- (void)expandAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
