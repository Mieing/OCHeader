@class AWEIMFlexComponent, AWEIMComponentContext, AWEIMFlexStyle, UIView, NSArray, NSString;

@interface AWEIMFlexPresenter : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) AWEIMFlexPresenter *parentPresenter;
@property (weak, nonatomic) AWEIMComponentContext *context;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL isLayoutContainer;
@property (nonatomic) unsigned long long commonActionOption;
@property (retain, nonatomic) AWEIMFlexStyle *style;
@property (retain, nonatomic) NSArray *subPresenters;
@property (nonatomic) BOOL enableAddToCellAccessibilityElements;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) AWEIMFlexComponent *component;
@property (nonatomic) BOOL shouldUpdateAllComponentWhenThisPresenterReload;
@property (nonatomic) long long containerType;
@property (nonatomic) long long belongingContainerType;
@property (nonatomic) long long order;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)adapterSetSubPresenters:(id)a0;
- (id)eraseToAnyFlexPresenter;
- (void)willUnBindView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFit:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isMeasurementRequired;
- (BOOL)isTextNode;
- (id)allSubPresentersFromRoot;
- (void)refreshAttachView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)hidden:(BOOL)a0;

@end
