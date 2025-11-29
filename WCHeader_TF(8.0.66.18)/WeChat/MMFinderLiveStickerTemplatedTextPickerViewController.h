@class MMUITextField, MMFinderLiveTextStickerItem, UIImageView, NSString, MMFinderLiveTemplatedTextStickerImageProvider, UIView, UIButton;
@protocol MMFinderLiveStickerContentPickerDelegate;

@interface MMFinderLiveStickerTemplatedTextPickerViewController : MMCPUIViewController <UITextFieldDelegate, MMFinderLiveStickerContentPicking, MMUIViewControllerOverrideOrientationMaskProtocol>

@property (retain, nonatomic) MMFinderLiveTemplatedTextStickerImageProvider *imageProvider;
@property (retain, nonatomic) MMFinderLiveTextStickerItem *stickerItem;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *bottomBarContainerView;
@property (retain, nonatomic) MMUITextField *textField;
@property (retain, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) id<MMFinderLiveStickerContentPickerDelegate> delegate;
@property (nonatomic) unsigned long long overrideOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLowerThirdImageGenerator:(id)a0 resources:(id)a1;
- (void)dealloc;
- (void)showWithStickerItem:(id)a0 inViewController:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onKeyboardShowing:(id)a0;
- (void)onKeyboardHiding:(id)a0;
- (void)onTextFieldChanged;
- (void)onConfirmed;
- (void).cxx_destruct;

@end
