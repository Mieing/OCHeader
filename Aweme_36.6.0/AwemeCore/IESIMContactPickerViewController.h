@class UIStackView, NSString, UIView, NSDictionary, IESIMContactPickerComponentContext, UICollectionView, NSLayoutConstraint, IESIMContactPickerController;
@protocol IESIMContactPickerTemplateProtocol, AWEIMGroupChatPanelControllerDelegate, IESIMContactPickerContentService, AWEIMHalfScreenContainerVCProtocol, IESIMContactPickerLayoutProtocol;

@interface IESIMContactPickerViewController : AWEIMComponentViewController <AWEIMComponentManagerDependency, AWEIMHalfScreenContainerScrollProtocol, IESIMContactPickerContainerService, AWEIMGroupChatPanelProtocol, AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) UIStackView *flexTopContainerStackView;
@property (retain, nonatomic) UIStackView *topContainerStackView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIStackView *bottomContainerStackView;
@property (retain, nonatomic) id<IESIMContactPickerTemplateProtocol> selectListTemplate;
@property (retain, nonatomic) IESIMContactPickerComponentContext *componentContext;
@property (weak, nonatomic) id<IESIMContactPickerContentService> contentService;
@property (retain, nonatomic) id<IESIMContactPickerLayoutProtocol> layout;
@property (nonatomic) unsigned long long flexTopContainerItemCount;
@property (nonatomic) unsigned long long topContainerItemCount;
@property (nonatomic) unsigned long long bottomContainerItemCount;
@property (retain, nonatomic) NSLayoutConstraint *bottomContainerBottomMas;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEIMHalfScreenContainerVCProtocol> halfScreenContainer;
@property (retain, nonatomic) IESIMContactPickerController *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> groupChatPanelDelegate;
@property (copy, nonatomic) NSDictionary *groupChatTrackDict;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (double)externalAssignTopDragHeight;
- (id)componentsNameArrayWithContext:(id)a0;
- (id)dragHintViewBackgroundColor;
- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void)halfScreenContainerVCDidDismiss:(id)a0;
- (void)halfScreenContainerVCDidTapConatainer:(id)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (void)showGroupChatPanelOnViewController:(id)a0;
- (void)aweui_emptyPageTapped;
- (void)notifyContainerHeightUpdate;
- (void)updateContainerBottomMasConstant:(double)a0;
- (void)setTopContainerHidden:(BOOL)a0;
- (void)setupFlexTopContainerAnimationBlockIfNeeded:(id)a0;
- (void)updateFlexTopContainerLayoutWithHide:(BOOL)a0 animated:(BOOL)a1;
- (void)setupTopContainersLayout;
- (void)refreshWholePage;
- (struct CGSize { double x0; double x1; })screenSize;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setupObservers;
- (void)log:(id)a0;
- (id)scrollView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (void)setupUI;
- (void)setupLayout;

@end
