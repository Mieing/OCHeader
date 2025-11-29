@class UIStackView, NSString, NSDictionary, NSObject, UIView, NSMutableArray, IESIMContactPickerComponentContext;

@interface IESIMCreateGroupFunctionsComponent : AWEIMComponentBase

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) NSMutableArray *itemModels;
@property (weak, nonatomic) IESIMContactPickerComponentContext *context;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) NSObject *createOpenGroupPagePrefetchID;

+ (void)__log:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)createGroupContext;
- (void)p_layoutUI;
- (void)p_setupItemModels;
- (void)p_setupFunctionItems;
- (BOOL)p_canShowCreateOpenGroupItem;
- (id)p_createOpenGroupItemModel;
- (void)p_preloadCreateOpenGroupPageIfNeeded;
- (void)p_trackCreateOpenGroupShow;
- (BOOL)p_canShowFaceToFaceItem;
- (id)p_faceToFaceItemModel;
- (void)p_transferToCreateOpenGroup;
- (void)p_trackCreateOpenGroupClick;
- (void)p_configurePageContext:(id)a0;
- (void)p_makeCreateOpenGroupViewController:(id)a0;
- (void)p_transferToFaceToFaceGroup;
- (void)p_transferToFaceToFaceGroupWithParams:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)layout;
- (id)init;
- (id)componentView;

@end
