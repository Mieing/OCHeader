@class UIView, NSString, AWEStoryTextImageModel, ACCRecordLayoutGuide, ACCStickerContainerView, ACCTextStickerView, AWEVideoPublishViewModel, NSObject, ACCRecorderTextModeGradientView, UILabel, ACCAnimatedButton;
@protocol ACCTextModeBackgroundManagerProtocol, ACCMultiStyleAlertProtocol, ACCStickerLogger, ACCTextStickerEditViewProtocol;

@interface ACCRecorderTextModePreviewViewController : UIViewController <ACCStickerContainerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) ACCAnimatedButton *switchColorButton;
@property (retain, nonatomic) ACCRecorderTextModeGradientView *switchColorGradientView;
@property (retain, nonatomic) ACCRecorderTextModeGradientView *backgroundView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (retain, nonatomic) UIView<ACCTextStickerEditViewProtocol> *textStickerEditView;
@property (weak, nonatomic) ACCTextStickerView *stickerView;
@property (retain, nonatomic) UILabel *textFunctionHintLabel;
@property (retain, nonatomic) ACCAnimatedButton *nextButton;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) NSObject<ACCMultiStyleAlertProtocol> *backAlert;
@property (retain, nonatomic) AWEStoryTextImageModel *inputTextModel;
@property (retain, nonatomic) NSObject<ACCTextModeBackgroundManagerProtocol> *backgroundManager;
@property (retain, nonatomic) UILabel *switchColorLabel;
@property (nonatomic) BOOL enableBack;
@property (copy, nonatomic) id /* block */ goNext;
@property (copy, nonatomic) id /* block */ close;
@property (copy, nonatomic) id /* block */ textViewDidApear;
@property (copy, nonatomic) id /* block */ onChangeColor;
@property (copy, nonatomic) id /* block */ onBeginEdit;
@property (copy, nonatomic) id /* block */ onEndEdit;
@property (copy, nonatomic) id /* block */ backToShootMode;
@property (retain, nonatomic) id<ACCStickerLogger> stickerLogger;
@property (retain, nonatomic) ACCRecordLayoutGuide *layoutGuide;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ textDidChangeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshColor;
- (id)generateBackgroundImage;
- (void)didClickCloseButton:(id)a0;
- (void)didClickNextButton;
- (void)stickerContainer:(id)a0 gestureStarted:(id)a1 onView:(id)a2;
- (void)stickerContainer:(id)a0 gestureEnded:(id)a1 onView:(id)a2;
- (BOOL)stickerContainerTapBlank:(id)a0 gesture:(id)a1;
- (double)mediaContainerScaleFactor;
- (void)editTextStickerView:(id)a0;
- (BOOL)p_showBackAlertIfNeeded;
- (void)beginEditTextSticerIfNeeded;
- (id)initWithTextModel:(id)a0 backgroundManager:(id)a1;
- (void)p_setupNotification;
- (void)setupStickerContainer;
- (id)createListLabel;
- (void)setupTextSticker;
- (void)didClickBackButton:(id)a0;
- (id)addTextWithTextInfo:(id)a0 locationModel:(id)a1;
- (void)p_showSystemBackAlert;
- (void)p_exit:(BOOL)a0;
- (id)newTextInfo;
- (id)configStickerView:(id)a0 withConfig:(id)a1 locationModel:(id)a2;
- (void)p_handleKeyboardDidShow;
- (void)p_handleKeyboardWillHide;
- (void)p_retype;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
