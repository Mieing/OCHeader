@interface AWEFormatImpl.FormatLiveCleanScreenService : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ hasCleanedScreen;
    void /* unknown type, empty encoding */ isKeyboardShowing;
    void /* unknown type, empty encoding */ canCleanScreen;
    void /* unknown type, empty encoding */ lastPointX;
    void /* unknown type, empty encoding */ startPointX;
    void /* unknown type, empty encoding */ panGes;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resumeBgView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resumeBtn;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)didClickResumeButton;
- (void)panGesturAnimationWithGesture:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
