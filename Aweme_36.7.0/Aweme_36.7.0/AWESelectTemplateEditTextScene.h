@class NSString, AWESelectTemplatePlayerViewModel, AWESelectTemplateTextEditorViewController, UIView, ACCButton, AWESelectTemplateViewModel;

@interface AWESelectTemplateEditTextScene : AWEScene <AWESelectTemplateTextEditorVCDelegate>

@property (retain, nonatomic) AWESelectTemplateTextEditorViewController *textEditorViewController;
@property (retain, nonatomic) UIView *textBorderView;
@property (retain, nonatomic) ACCButton *playPauseButton;
@property (copy, nonatomic) NSString *pausedTextFragmentID;
@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (weak, nonatomic) AWESelectTemplatePlayerViewModel *playerViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneDidLoad:(id)a0;
- (void)sceneWillApper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidApper:(id)a0 operation:(long long)a1;
- (void)sceneWillDisapper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidDisapper:(id)a0 operation:(long long)a1;
- (void)sceneDidUnload:(id)a0;
- (void)sceneVc_enterBackgroundNotification;
- (void)sceneVc_enterForegroundNotification;
- (void)registerPlayerViewModelCallback;
- (void)p_showTextEditView;
- (void)p_updateSticker:(id)a0 disableAnimation:(BOOL)a1;
- (id)p_targetSlotForResourceID:(id)a0;
- (void)p_setupTextBorderWithTextFragment:(id)a0;
- (void)p_replaceTextForFragment:(id)a0;
- (void)textEditorViewController:(id)a0 didSelectTextFragmen:(id)a1;
- (void)textEditorViewController:(id)a0 didStartEditingTextFragmen:(id)a1;
- (void)textEditorViewController:(id)a0 didChangeTextFragment:(id)a1;
- (void)textEditorViewController:(id)a0 didEndEditingTextFragmen:(id)a1;
- (void)textEditorViewController:(id)a0 didResetTextFragment:(id)a1;
- (void).cxx_destruct;

@end
