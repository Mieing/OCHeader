@class NSString, UICollectionView, UIImageView, UIView, RxCollectionViewDiffableDataSource, RTVInteractiveEmojiSegmentController;
@protocol RTVChatController, RTVUserProfileManagerInterface, RTVIMConversationServiceInterface, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVSettingsManager;

@interface RTVInteractionBottomBarEmojiViewController : UIViewController <RTVFullScreenViewControllerProtocol, UICollectionViewDelegate>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UIImageView *arrowImageView;
@property (readonly, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) RTVInteractiveEmojiSegmentController *emojiController;
@property (readonly, nonatomic) id<RTVChatController> chatController;
@property (readonly, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVIMConversationServiceInterface> imManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (double)__bottomPlaceholderHeight;
- (id)__sectionIdentifier;
- (void)__applySnapshotWithIdentifiers:(id)a0;
- (id)transitionViewBackgroundColorForFullScreenTransition;
- (void)renderWithRoomController:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)__sendMessage:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;

@end
