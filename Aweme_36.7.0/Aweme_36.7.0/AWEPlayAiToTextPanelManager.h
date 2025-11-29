@class UIViewController, NSString, NSDictionary, DUXContentSheet, AWEPlayAiToTextMutliTabViewController, AWEAwemeModel, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayAiToTextPanelDelegate;

@interface AWEPlayAiToTextPanelManager : NSObject <DUXSheetDelegate, AWEPlayAiToTextPanelViewControllerDelegate, DUXBasicSheetDelegate>

@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (weak, nonatomic) AWEPlayAiToTextMutliTabViewController *aiToTextViewController;
@property (nonatomic) BOOL isAITextPanelShowing;
@property (nonatomic) long long closeType;
@property (nonatomic) BOOL shouldDisableFullScreenPop;
@property (weak, nonatomic) id<AWEPlayAiToTextPanelDelegate> delegete;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *container;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)sheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)onDislikeClicked:(id)a0;
- (void)showAiToTextPanelWithModel:(id)a0 targetHeight:(double)a1 completion:(id /* block */)a2;
- (void)AiToTextPanelExitTrack;
- (void)aiToTextPanelViewControllerWillShowMenu:(id)a0;
- (void)aiToTextPanelViewControllerDismissMenu:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (void)addObserver;
- (void)dealloc;

@end
