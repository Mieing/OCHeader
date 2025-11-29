@class UIViewController, NSMapTable, NSString, AWEVideoPublishViewModel, AWETranslationTransitionController;

@interface AWERichTextEditorManagerImpl : NSObject <ACCTextModeTextEditInputDelegate, ACCRichTextEditorManagerProtocol>

@property (retain, nonatomic) AWETranslationTransitionController *nextTranslationDelegate;
@property (nonatomic) BOOL isCreatingRichTextEditor;
@property (nonatomic) BOOL ignoreBackBtnAlert;
@property (weak, nonatomic) AWEVideoPublishViewModel *originalPublishModel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ dismissPreconditionBlock;
@property (weak, nonatomic) UIViewController *textModeConfirmLandingVC;
@property (retain, nonatomic) NSMapTable *sessionContainersMap;
@property (weak, nonatomic) UIViewController *simplifiedNav;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleCacheOriginTextKeepEditorDraftID;
+ (void)updatePublishModel:(id)a0 originalPublishModel:(id)a1 params:(id)a2;
+ (void)prefetchModernTextModeTemplates:(id)a0;
+ (void)handleDraftError:(id)a0;
+ (void)createNewOriginalTextEditor:(BOOL)a0 transitioningDelegate:(id)a1 originalPublishModel:(id)a2 dismissBlock:(id /* block */)a3 params:(id)a4 topViewController:(id)a5;
+ (id)createRichPublishRepoModelWithOriginPublishViewModel:(id)a0;
+ (id)hashTagsFromJsonString:(id)a0;
+ (void)handleParamsParse:(id)a0 publishModel:(id)a1;

- (void)exitTextInputWithText:(id)a0 socialList:(id)a1 type:(unsigned long long)a2 publishModel:(id)a3;
- (id)generateBackAlert:(id)a0 text:(id)a1 publishViewModel:(id)a2 textView:(id)a3 socialList:(id)a4 confirm:(id /* block */)a5 cancel:(id /* block */)a6;
- (void)exitWithCancel;
- (void)inputTimeoutWithText:(id)a0;
- (void)autoSaveWithText:(id)a0 textView:(id)a1 publishModel:(id)a2 socialList:(id)a3;
- (long long)limitTextCount;
- (void)presentRichTextEditorViewControllerWithOriginalPublishModel:(id)a0 dismissBlock:(id /* block */)a1 params:(id)a2 customTransitionDelegate:(id)a3;
- (void)enterToRichTextEditorViewControllerWithOriginalPublishModel:(id)a0 dismissBlock:(id /* block */)a1 params:(id)a2 shouldDispatchAfter:(BOOL)a3 topViewController:(id)a4;
- (void)presentRichTextToolbarPOIViewControllerWithOriginalPublishModel:(id)a0 params:(id)a1 poiIDDidChangeBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;
- (id)selectedPoiIDWithPublishModel:(id)a0;
- (void)configPublishModelPoiID:(id)a0 poiName:(id)a1 publishModel:(id)a2;
- (void)publishVideo:(id)a0;
- (void)enterModernTextEditorPageWithOriginalPublishModel:(id)a0 params:(id)a1;
- (void)recoverFromSavedTextAndSocialListWithPublishModel:(id)a0;
- (void)transferToRichTextEditorWithWithOriginalPublishModel:(id)a0 transitioningDelegate:(id)a1 dismissBlock:(id /* block */)a2 params:(id)a3 shouldDispatchAfter:(BOOL)a4 topViewController:(id)a5;
- (void)transferToRichTextToolbarPOIViewControllerWithOriginalPublishModel:(id)a0 params:(id)a1 poiIDDidChangeBlock:(id /* block */)a2 didDismissBlock:(id /* block */)a3;
- (void)storeSessionContainer:(id)a0 withCreateID:(id)a1;
- (void)clearSessionContainerWithCreateID:(id)a0;
- (void)saveDraftWithPublishViewModel:(id)a0 text:(id)a1 textView:(id)a2 coverImage:(id)a3 socialList:(id)a4 isUserAction:(BOOL)a5 completion:(id /* block */)a6;
- (void)showRichTextToolbarPOIViewControllerWithOriginalPublishModel:(id)a0 params:(id)a1 poiIDDidChangeBlock:(id /* block */)a2 didDismissBlock:(id /* block */)a3 sourceVC:(id)a4;
- (void)updateSimplifiedModernTextModePublishModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
