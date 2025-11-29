@class MJPageViewV2, MJImageComposingViewModel, NSArray, MJImageMaterialPicker, NSString, MJImageTextInputView;
@protocol MJImageEditTextPanelDelegate;

@interface MJImageEditTextPanel : MJImagePanel <MJImageMaterialPickerDelegate, MJImageTextInputViewDelegate, MJPageViewV2Delegate, MJPageViewV2DataSource>

@property (retain, nonatomic) MJImageComposingViewModel *viewModel;
@property (retain, nonatomic) MJImageTextInputView *textInputView;
@property (retain, nonatomic) MJImageMaterialPicker *materialPicker;
@property (retain, nonatomic) MJPageViewV2 *pageView;
@property (retain, nonatomic) NSArray *pageTitles;
@property (nonatomic) double translateYKeyboardShown;
@property (weak, nonatomic) id<MJImageEditTextPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)numberOfItemsInPageView:(id)a0;
- (id)pageView:(id)a0 titleForItemAtIndex:(long long)a1;
- (id)pageView:(id)a0 contentForItemAtIndex:(long long)a1;
- (void)pageView:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)imageMaterialPicker:(id)a0 didSelectItem:(id)a1;
- (void)textInputViewDidBeginEditing:(id)a0;
- (void)textInputViewDidEndEditing:(id)a0;
- (void)textInputView:(id)a0 didUpdateText:(id)a1;
- (void)textInputView:(id)a0 didUpdateHeight:(double)a1;
- (void)textInputView:(id)a0 willShowKeyboard:(double)a1 animationDuration:(double)a2 curve:(long long)a3;
- (void)textInputViewWillHideKeyboard:(id)a0 animationDuration:(double)a1 curve:(long long)a2;
- (void)textInputViewDidFinish:(id)a0;
- (void)_moveTextInputViewWithTranslateY:(double)a0 animated:(BOOL)a1 duration:(double)a2 curve:(long long)a3;
- (void)_updateTextWithMaterialItem:(id)a0;
- (void)_updateText:(id)a0;
- (BOOL)isEditingPanel;
- (BOOL)processRenderTapWithLayer:(id)a0 events:(unsigned long long)a1;
- (void).cxx_destruct;

@end
