@class MMUIButton, NSString, UIView, TextInputTranslatingMgr, UIImageView, TranslateLanguageSelectView, UILabel, MMTimer;
@protocol TranslateToolViewDelegate;

@interface TranslateToolView : UIView <TranslateLanguageSelectViewDelegate, TextFloatPreviewDelegate, TextInputTranslatingMgrDelegate>

@property (nonatomic) double transStateWidth;
@property (nonatomic) unsigned long long currentInputID;
@property (retain, nonatomic) UILabel *resultLabel;
@property (retain, nonatomic) UIView *resultCropView;
@property (retain, nonatomic) MMUIButton *transIconBtn;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MMUIButton *useResultButton;
@property (retain, nonatomic) MMUIButton *languageSelectButton;
@property (retain, nonatomic) TranslateLanguageSelectView *selectedLanguageView;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *nsTranslatedText;
@property (retain, nonatomic) NSString *translatingWording;
@property (retain, nonatomic) NSString *nsTranslatedTextToDispaly;
@property (retain, nonatomic) NSString *nsTranslatedTextWithNoLineBreak;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) int state;
@property (nonatomic) unsigned int translatingWordingIndex;
@property (retain, nonatomic) TextInputTranslatingMgr *translatingMgr;
@property (nonatomic) BOOL bShowing;
@property (weak, nonatomic) id<TranslateToolViewDelegate> delegate;
@property (retain, nonatomic) NSString *chatName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransStateWidth:(double)a0 chatName:(id)a1;
- (void)initView;
- (void)resizeLanguageSelectButton;
- (void)changeToTransState:(int)a0;
- (void)changeToReadyState;
- (void)changeToTranslatedState;
- (void)changeToTranslatingState;
- (void)showUseResultBtn;
- (void)startTimer;
- (void)stopTimer;
- (void)setResultLabelText:(id)a0;
- (void)displayResultText;
- (void)changeTranslatingWording;
- (void)onInputContentChangeWithText:(id)a0;
- (void)hiddenLanguageSelectView;
- (void)updateTransWidth:(double)a0;
- (unsigned long long)getInputID;
- (void)setHidden:(BOOL)a0;
- (void)onViewDisappear;
- (void)reportShowTranslate;
- (void)onClickResultLabel;
- (void)onClickUseTransResultContent;
- (void)onSendText:(id)a0;
- (void)onClickLanguageSelectBtn;
- (void)onClickSelectLanguage;
- (void)onConfirmedWithLanguageType:(id)a0;
- (void)onLanguageSelectViewWillClose;
- (void)onWindowHide;
- (id)getViewController;
- (id)getChatName;
- (void)onTranslateFinishWithText:(id)a0 translateText:(id)a1 inputID:(unsigned long long)a2;
- (void).cxx_destruct;

@end
