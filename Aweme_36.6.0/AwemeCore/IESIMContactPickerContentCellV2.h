@class NSMutableDictionary, IESIMContactPickerContentContainer, NSString, UIView;
@protocol IESIMContactPickerContentCellControllerProtocol;

@interface IESIMContactPickerContentCellV2 : UICollectionViewCell <UIGestureRecognizerDelegate, IESIMContactPickerContentCellProtocol, IESIMContactPickerComponetViewCacheService>

@property (retain, nonatomic) IESIMContactPickerContentContainer *container;
@property (retain, nonatomic) IESIMContactPickerContentContainer *rightContainer;
@property (retain, nonatomic) IESIMContactPickerContentContainer *leftContainer;
@property (retain, nonatomic) IESIMContactPickerContentContainer *centerContainer;
@property (retain, nonatomic) IESIMContactPickerContentContainer *firstLineContainer;
@property (retain, nonatomic) IESIMContactPickerContentContainer *secondLineContainer;
@property (retain, nonatomic) IESIMContactPickerContentContainer *thirdLineContainer;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) id<IESIMContactPickerContentCellControllerProtocol> model;
@property (retain, nonatomic) NSMutableDictionary *componentsViewMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (void)configWithCellModel:(id)a0;
- (void)willDisplayAtIndexPath:(id)a0 needCallBack:(BOOL)a1;
- (void)didEndDisplay;
- (void)changeSelectableState:(BOOL)a0;
- (id)findOrBuildViewForComponent:(id)a0;
- (void)p_renderComponents:(id)a0 inContainer:(id)a1;
- (void)__updateAccessibility;
- (id)p_getViewsForComponents:(id)a0 cellSubViews:(id)a1;
- (void)p_arrangeSubViews:(id)a0 inContainer:(id)a1 components:(id)a2;
- (void)p_renderComponents:(id)a0 views:(id)a1;
- (void)p_updateHugCompressionResistance:(id)a0;
- (void)p_layoutContainers;
- (void)p_setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityActivate;

@end
