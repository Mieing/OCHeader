@class MMFinderLiveTextStickerItem, NSString, UIView, EditImageTextInputView;
@protocol MMFinderLiveStickerContentPickerDelegate;

@interface MMFinderLiveStickerStandardTextPickerViewController : MMCPUIViewController <EditImageTextInputDelegate, MMFinderLiveStickerContentPicking, MMUIViewControllerOverrideOrientationMaskProtocol>

@property (retain, nonatomic) MMFinderLiveTextStickerItem *stickerItem;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UIView *inputContainerView;
@property (retain, nonatomic) EditImageTextInputView *inputView;
@property (weak, nonatomic) id<MMFinderLiveStickerContentPickerDelegate> delegate;
@property (nonatomic) unsigned long long overrideOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)showWithStickerItem:(id)a0 inViewController:(id)a1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)confirmEditText:(id)a0 withColor:(id)a1 style:(unsigned long long)a2 backgroundColor:(id)a3;
- (void)cancelEditText:(id)a0;
- (void)onKeyboardShowing:(id)a0;
- (void)onKeyboardHiding:(id)a0;
- (void).cxx_destruct;

@end
