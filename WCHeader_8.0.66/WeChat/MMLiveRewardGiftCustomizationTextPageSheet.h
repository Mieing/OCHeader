@class NSString, MMFinderLiveGiftCustomizationModel, PAGFile, PAGView, UIButton, MMFinderLiveTaskId, UITextField, MMLiveSlottedTextField, UILabel, UIScrollView;
@protocol MMLiveRewardGiftCustomizationTextPageSheetDelegate, MMFinderLiveGiftCustomizationTextValidating;

@interface MMLiveRewardGiftCustomizationTextPageSheet : MMPageSheetBaseView <MMLiveSlottedTextFieldDelegate, UITextFieldDelegate, MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationModel *model;
@property (retain, nonatomic) NSString *originalText;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) id<MMFinderLiveGiftCustomizationTextValidating> validator;
@property (nonatomic) BOOL detaching;
@property (nonatomic) unsigned long long finalAction;
@property (retain, nonatomic) PAGFile *pagFile;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) PAGView *previewView;
@property (retain, nonatomic) UILabel *fullPriceLabel;
@property (retain, nonatomic) UILabel *premiumPriceLabel;
@property (retain, nonatomic) MMLiveSlottedTextField *primaryTextField;
@property (retain, nonatomic) UITextField *fallbackTextField;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) id<MMLiveRewardGiftCustomizationTextPageSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 model:(id)a1;
- (void)layoutSubviews;
- (void)pageSheetWillDisappear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)pageSheetDidDisappear;
- (void)onVoiceOverStatusChanged;
- (void)onKeyboardShowing:(id)a0;
- (void)onKeyboardHiding:(id)a0;
- (void)onCanceled;
- (void)onConfirmed;
- (void)onCleared;
- (void)onFallbackTextFieldChanged;
- (BOOL)isCharacterStringValid:(id)a0 inSlotIndex:(unsigned long long)a1 forSlottedTextField:(id)a2;
- (BOOL)isWeChatEmoticonValid:(id)a0 inSlotIndex:(unsigned long long)a1 forSlottedTextField:(id)a2;
- (void)slottedTextFieldTextChanged:(id)a0;
- (BOOL)slottedTextFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void)initializeComponents;
- (void)loadPreview;
- (void)configureFullPriceLabelText;
- (void)configurePremiumPriceLabelText;
- (void)configureTextFields;
- (double)contentHeight;
- (id)liveTask;
- (void).cxx_destruct;

@end
