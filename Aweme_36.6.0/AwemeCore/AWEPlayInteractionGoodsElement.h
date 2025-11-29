@class NSString, UIView;
@protocol AWEFeedGoodsElementProtocol;

@interface AWEPlayInteractionGoodsElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEFeedGoodsElementProtocol> *goodsInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)getTrackParamsFromModel;
- (void)transferToGoodsDetail;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
