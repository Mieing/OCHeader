@class NSString, NSDictionary, AWEAwemeModel, UIView;
@protocol AWEInteractionElementPopoverContextProtocol, AWEInteractionElementLongPressProtocol;

@interface AWEFavoriteLongPressController : NSObject

@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIView *alignView;
@property (retain, nonatomic) UIView *interactionContainer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *contextDict;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isStatusChanged;
@property (nonatomic) BOOL isPopoverShowing;
@property (retain, nonatomic) id<AWEInteractionElementPopoverContextProtocol> horizontalContext;
@property (retain, nonatomic) id<AWEInteractionElementLongPressProtocol> longPressGestureManager;

+ (id)sharedManager;

- (void)config:(id)a0;
- (void)setupHorizontalContextWithData:(id)a0;
- (void).cxx_destruct;
- (void)remove;
- (void)showWithCompletion:(id /* block */)a0;

@end
