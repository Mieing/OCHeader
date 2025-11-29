@class NSString;
@protocol UIGestureRecognizerDelegate;

@interface FileDetailPDFPreviewViewController : MMPDFPreviewController <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<UIGestureRecognizerDelegate> recognizeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecognizeDelegate:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)PDFViewWillClickOnLink:(id)a0 withURL:(id)a1;
- (BOOL)shouldHandleSingleTapAt:(id)a0;
- (void).cxx_destruct;

@end
