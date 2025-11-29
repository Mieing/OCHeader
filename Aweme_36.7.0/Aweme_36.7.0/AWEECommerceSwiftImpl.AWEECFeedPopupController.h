@interface AWEECommerceSwiftImpl.AWEECFeedPopupController : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ popupStatusAtPanGestureBegin;
    void /* unknown type, empty encoding */ lastPopupStatus;
    void /* unknown type, empty encoding */ secondLastPopupStatus;
    void /* unknown type, empty encoding */ popupStatus;
    void /* unknown type, empty encoding */ beginTranslationY;
    void /* unknown type, empty encoding */ panel;
    void /* unknown type, empty encoding */ interactor;
    void /* unknown type, empty encoding */ isVideoPlayingOnEnter;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)handlePanGesture:(id)a0;

@end
