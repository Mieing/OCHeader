@interface AWERecommendToFriendSwiftImpl.RecommendToFriendInputPanelViewController : UIViewController <DUXSheetDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ recommendToFriendInputView;
    void /* unknown type, empty encoding */ isDismissing;
    void /* unknown type, empty encoding */ cachedKeyboardHeight;
    void /* unknown type, empty encoding */ sheetHeightWithoutKeyboard;
    void /* unknown type, empty encoding */ prevMessageInputViewHeight;
    void /* unknown type, empty encoding */ panGestureRecognizer;
    void /* unknown type, empty encoding */ panGestureStartPoint;
    void /* unknown type, empty encoding */ basicSheet;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verticalListView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nineGridListView;
}

- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handlePanGesture:(id)a0;
- (void)keyboardWillShowWithNotice:(id)a0;
- (void)keyboardWillHideWithNotice:(id)a0;
- (void)sendBtnClicked:(id)a0;
- (void)closeBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
