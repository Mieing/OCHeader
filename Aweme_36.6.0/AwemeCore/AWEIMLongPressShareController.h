@class NSArray, NSDictionary, AWEAwemeModel, UIView;
@protocol AWEInteractionElementPopoverDataProtocol, AWEIMInteractionShareElementDataProtocol, AWEInteractionElementLongPressProtocol, AWEInteractionElementPopoverDataElementAnimatorProtocol, AWEInteractionElementPopoverContextProtocol;

@interface AWEIMLongPressShareController : NSObject

@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIView *alignView;
@property (retain, nonatomic) UIView *interactionContainer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *contextDict;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) id<AWEInteractionElementPopoverDataProtocol, AWEIMInteractionShareElementDataProtocol> data;
@property (retain, nonatomic) id<AWEInteractionElementPopoverDataElementAnimatorProtocol> dataElementAnimator;
@property (retain, nonatomic) id<AWEInteractionElementPopoverContextProtocol> context;
@property (retain, nonatomic) id<AWEInteractionElementLongPressProtocol> longPressGestureManager;

+ (id)modelTypeWhiteList;

- (id)initWithShareElementPopOver:(id)a0 alignView:(id)a1 interactionContainer:(id)a2 longPressGestureManager:(id)a3 model:(id)a4 contextDict:(id)a5 didDismiss:(id /* block */)a6;
- (BOOL)checkModeltype;
- (void).cxx_destruct;
- (void)showWithCompletion:(id /* block */)a0;
- (void)setupContext;

@end
