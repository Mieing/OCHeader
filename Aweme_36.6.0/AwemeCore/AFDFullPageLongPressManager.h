@class UIView, UILongPressGestureRecognizer, UIImage, AWEAwemeModel, AFDRichAwemeFullPageContext, NSString, NSMutableArray, NSObject;
@protocol AWEAwemePlayInteractionInteractorProtocol, AFDRichContentContainerViewControllerProtocol, AWELongPressPanelPlayerContextProtocol, IESVideoPlayerProtocol;

@interface AFDFullPageLongPressManager : NSObject <AFDFullPageLongPressManagerProtocol>

@property (retain, nonatomic) NSObject<AWEAwemePlayInteractionInteractorProtocol> *interactor;
@property (retain, nonatomic) NSMutableArray *longPressModels;
@property (nonatomic) BOOL albumImagePickerShowed;
@property (nonatomic) BOOL albumImageAddToCustomPickerShowed;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AFDRichAwemeFullPageContext *context;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIImage *currentImage;
@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol> richContainer;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> currentPlayerController;
@property (weak, nonatomic) id<AWELongPressPanelPlayerContextProtocol> longPressContext;
@property (copy, nonatomic) id /* block */ panelDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (BOOL)isLongPressPanelShowing;
- (id)dislikeButtonText;
- (void)setupObserver;
- (BOOL)isFromSearch;
- (void)onAlbumImagePickerShowNotification:(id)a0;
- (void)onAlbumImagePickerHideNotification:(id)a0;
- (void)onAlbumImageAddToCustomPickerShowNotification:(id)a0;
- (void)onAlbumImageAddToCustomPickerHideNotification:(id)a0;
- (id)p_dislikeTitleStringForKey:(id)a0;
- (void)showNewPressPanel;
- (BOOL)shouldShowLongPressMenu;
- (id)lppSubSceneWithContext:(id)a0;
- (id)longPressPanelLogExtraDict;
- (id)search_params;
- (void)trackShowLongPressPanelWithTappedPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)configContextBridge:(id)a0;
- (BOOL)shouldShowNoInterestAndUnfollowButtonTogether;
- (BOOL)isFamiliarContentEnableDislike;
- (void)showDislikeOnVideo;
- (void)showSharePanel;
- (void).cxx_destruct;
- (BOOL)isInteracting;
- (void)handleLongPressGesture:(id)a0;
- (void)setupContext;
- (id)fromPage;

@end
