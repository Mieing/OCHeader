@interface AWEFormatImpl.CommonSelectView : UIView <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subTitle;
    void /* unknown type, empty encoding */ showLeftReturnBtn;
    void /* unknown type, empty encoding */ showRightCloseBtn;
    void /* unknown type, empty encoding */ showRightTickBtn;
    void /* unknown type, empty encoding */ showRegenerateBtn;
    void /* unknown type, empty encoding */ showUploadBtn;
    void /* unknown type, empty encoding */ uploadSceneType;
    void /* unknown type, empty encoding */ cellName;
    void /* unknown type, empty encoding */ lastClickTime;
    void /* unknown type, empty encoding */ clickInterval;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tickButton;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
    void /* unknown type, empty encoding */ regenerateButton;
    void /* unknown type, empty encoding */ uploadButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ libraryService;
    void /* unknown type, empty encoding */ videoUploadOperation;
    void /* unknown type, empty encoding */ imageUploadOperation;
    void /* unknown type, empty encoding */ closeAction;
    void /* unknown type, empty encoding */ tickAction;
    void /* unknown type, empty encoding */ backAction;
}

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)tickButtonTapped;
- (void)regenerateButtonTapped;
- (void)uploadButtonTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)closeButtonTapped;
- (void)backButtonTapped;

@end
