@class NSString;
@protocol AWERichAwemeGoodsProgressElementBusinessProtocol;

@interface AWEPlayInteractionGoodsProgressElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) id<AWERichAwemeGoodsProgressElementBusinessProtocol> goodsProgressViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)isViewVisible:(id)a0;

@end
