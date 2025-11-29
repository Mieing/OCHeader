@class UIView, NSString, UITapGestureRecognizer, AWESelectTemplateChoseTemplateView, UIButton, NSMutableArray, AWESelectTemplatePlayerViewModel, AWESelectTemplateViewModel;
@protocol ACCProcessViewProtcol;

@interface AWESelectTemplateChangeTemplateScene : AWEScene <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestrue;
@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *progressLoadingView;
@property (retain, nonatomic) NSMutableArray *hasShownTemplateIdArray;
@property (retain, nonatomic) UIView *bubble;
@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (weak, nonatomic) AWESelectTemplatePlayerViewModel *playerViewModel;
@property (retain, nonatomic) AWESelectTemplateChoseTemplateView *footerView;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)dismissBubble;
- (void)showBubble:(id)a0;
- (void)cancelButtonClick:(id)a0;
- (void)saveButtonClick:(id)a0;
- (void)sceneDidLoad:(id)a0;
- (void)sceneWillApper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidApper:(id)a0 operation:(long long)a1;
- (void)sceneWillDisapper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidDisapper:(id)a0 operation:(long long)a1;
- (void)sceneDidUnload:(id)a0;
- (void)sceneVc_enterBackgroundNotification;
- (void)sceneVc_enterForegroundNotification;
- (void)updateProcessWithView:(id)a0;
- (void)templateSelectSetup;
- (void)loadingViewDismiss;
- (void)setupScene;
- (void)updateNoticeButton;
- (void)updateAuthorInformation;
- (void)generateTemplateVideoWithCompletion:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (id /* block */)editCompletionBlock;
- (void)generateOriginVideoData;
- (void)loadingViewShow:(id /* block */)a0;
- (void)templateSelectCilpSceneEnterRecoverEditedTemplate;
- (void)templateSelect:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;

@end
