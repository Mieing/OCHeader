@class NSString, UIImage, AWEMessageReachNativeDialogDataModel, UIViewController;
@protocol AWEMessageReachNativeDialogDelegate;

@interface AWEMessageReachNativeDialog : NSObject <DUXSheetDelegate, DUXAlertDialogDelegate>

@property (retain, nonatomic) AWEMessageReachNativeDialogDataModel *dataModel;
@property (weak, nonatomic) UIViewController *dialog;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id<AWEMessageReachNativeDialogDelegate> delegate;
@property (nonatomic) BOOL prefetchBeforeShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDealloc:(id)a0;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (BOOL)sheetWillStayAfterClickCloseButton;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetDidDragToDismiss:(id)a0;
- (void)sheetDealloc:(id)a0;
- (void)closeBtnDidClick;
- (void)p_showStyleZeroDialogOnViewController:(id)a0;
- (void)p_showStyleOneDialogOnViewController:(id)a0;
- (void)p_showStyleTwoDialogOnViewController:(id)a0;
- (void)prepareResourceWithCompletion:(id /* block */)a0;
- (id)p_placeholderImage;
- (void)buttonDidClickWithIndex:(long long)a0;
- (void)countDownTimeArrivedWithIndex:(long long)a0;
- (void)maskDidClick;
- (void)dialogDidAppear;
- (void)buttonDidClick:(id)a0;
- (void)dialogDealloc;
- (void)showOnViewController:(id)a0 withDataModel:(id)a1;
- (void)dismissWithAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
