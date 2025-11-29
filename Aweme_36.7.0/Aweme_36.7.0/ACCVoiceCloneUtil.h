@class NSString, DUXBasicSheet;

@interface ACCVoiceCloneUtil : NSObject <UIViewControllerTransitioningDelegate, DUXSheetDelegate>

@property (nonatomic) long long customEffectCount;
@property (nonatomic) long long originalNamedEffectCount;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)updateToneCloneContext:(long long)a0 originalNamedEffectCount:(long long)a1;
- (void)onAddToneCloneButtonClick:(id /* block */)a0;
- (BOOL)hasShownInfoPanel;
- (void)showToneCloneInfoPanel;
- (void)showToneCloneRecorder;
- (void)setHasShownInfoPanel;
- (void)onToneCloneInfoPanelConfirm;
- (id)privacyInfoKey;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
