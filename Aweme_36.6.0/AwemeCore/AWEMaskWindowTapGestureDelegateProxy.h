@class NSString, AWEMaskWindow;
@protocol AWEMaskWindowTapGestureDelegate;

@interface AWEMaskWindowTapGestureDelegateProxy : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) AWEMaskWindow *maskWindow;
@property (weak, nonatomic) id<AWEMaskWindowTapGestureDelegate> windowTapDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowTapGestureTriggered:(id)a0;
- (BOOL)enableDelegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
