@class IESLiveLayoutRulesController, IESLiveStackView, NSString, NSMutableArray, IESLiveLayoutContainerItem;

@interface IESLiveLayoutBaseContainer : NSObject <IESLiveLayoutContainer>

@property (retain, nonatomic) IESLiveLayoutContainerItem *item;
@property (retain, nonatomic) IESLiveStackView *view;
@property (retain, nonatomic) IESLiveLayoutRulesController *rule;
@property (retain, nonatomic) NSMutableArray *subContainers;
@property (nonatomic) BOOL useProxyStackView;
@property (nonatomic) struct CGSize { double x0; double x1; } maxContentSize;
@property (nonatomic, getter=isScrollable) BOOL scrollable;
@property (copy, nonatomic) NSString *viewType;
@property (copy, nonatomic) NSString *containerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForType:(id)a0;
- (void)addSubview:(id)a0 viewType:(id)a1;
- (void)didAutoRoateToOrientation:(long long)a0;
- (void)switchToSideMode;
- (void)switchToNormalMode;
- (void)willMoveToParentContainer:(id)a0;
- (void)didMoveToParentContainer:(id)a0;
- (void)addContainer:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)itemForView:(id)a0 viewType:(id)a1 size:(struct CGSize { double x0; double x1; })a2 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (void)addCustomContainer:(id)a0;
- (void)containerOrientationChanged:(long long)a0;
- (void)addSubview:(id)a0 viewType:(id)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 size:(struct CGSize { double x0; double x1; })a3;
- (id)ruleForType:(id)a0;
- (void)addPluginview:(id)a0;
- (void)addSubview:(id)a0 viewType:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)addSubview:(id)a0 viewType:(id)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)viewContainersMapping;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)loadView;
- (void)addContainer:(id)a0;
- (void)removeContainer:(id)a0;
- (id)itemForType:(id)a0;
- (BOOL)containsType:(id)a0;
- (void)removeType:(id)a0;

@end
