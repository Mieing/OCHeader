@class NSString;
@protocol AWENearbyLynxWidgetProtocol;

@interface AWEPlayInteractionNearbyController : AWEPlayInteractionBaseController

@property (nonatomic) BOOL freqCtrMgrHasInit;
@property (retain, nonatomic) id<AWENearbyLynxWidgetProtocol> feedWidget;
@property (copy, nonatomic) NSString *widgetSchema;

- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear;

@end
