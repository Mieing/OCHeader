@class UIView, NSString, MMUITextField, PAGFile, PAGView, MMFinderLiveFansGroupCustomizableGiftColorVariant, UIButton, UICollectionView, MMFinderLiveFansGroupGiftCustomizationPanelTextFieldGradientView, MMFinderLiveFansGroupCustomizableGiftItem;
@protocol MMFinderLiveFansGroupGiftCustomizationPanelDelegate;

@interface MMFinderLiveFansGroupGiftCustomizationPanel : MMPageSheetBaseView <UITextFieldDelegate, UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) MMFinderLiveFansGroupCustomizableGiftItem *giftItem;
@property (retain, nonatomic) MMFinderLiveFansGroupCustomizableGiftColorVariant *currentColorVariant;
@property (retain, nonatomic) NSString *currentColorVariantDefaultTextAttachment;
@property (retain, nonatomic) NSString *currentTextAttachment;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIView *previewContainerView;
@property (retain, nonatomic) PAGFile *currentPagFile;
@property (retain, nonatomic) PAGView *previewPagView;
@property (retain, nonatomic) MMUITextField *textField;
@property (retain, nonatomic) MMFinderLiveFansGroupGiftCustomizationPanelTextFieldGradientView *textFieldGradientView;
@property (retain, nonatomic) UICollectionView *colorVariantCollectionView;
@property (retain, nonatomic) UIView *textEditLightDismissView;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL textEditing;
@property (nonatomic) BOOL changeCommiting;
@property (weak, nonatomic) id<MMFinderLiveFansGroupGiftCustomizationPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGiftItem:(id)a0;
- (void)onPageSheetContainerBgTapped;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)onCustomizationConfirmed;
- (void)onCanceled;
- (void)onTextEditLightDismissed;
- (void)onTextFieldChanged;
- (void)onKeyboardShowing:(id)a0;
- (void)onKeyboardHiding:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)setupPageSheetConfig;
- (id)navigationLeftButton;
- (id)navigationRightButton;
- (void)updateTitleWithGiftItem:(id)a0;
- (void)setupNotifications;
- (void)preloadCustomGiftAnimations;
- (void)updateCurrentColorVariant:(id)a0;
- (void)updateTextFieldAppearanceForSelected:(BOOL)a0;
- (unsigned long long)validateTextAttachment:(id)a0;
- (void)showToastForTextAttachmentValidationResult:(unsigned long long)a0;
- (void)updateTextAttachmentToEffectiveValue;
- (void)updateTextAttachmentToPreviewValue;
- (id)originalTextAttachment;
- (BOOL)shouldConfirm;
- (void)updateConfirmButtonEnabled;
- (void).cxx_destruct;

@end
