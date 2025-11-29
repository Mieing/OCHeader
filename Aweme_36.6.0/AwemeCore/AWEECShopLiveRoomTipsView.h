@class NSString, LOTAnimationView, UIImageView, UILabel, IESECServiceProxy, NSDictionary;
@protocol IESECShopForwardCoService, IESECShopPageContextV2;

@interface AWEECShopLiveRoomTipsView : UIView <AWEECLiveShopTipsViewProtocol, IESECShopLiveRoomTipsViewProtocol> {
    id<IESECShopPageContextV2> _context;
    NSDictionary *_configs;
    BOOL _isFirstShow;
    BOOL _isFirstSlide;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *enterMethod;

- (id)initWithShopContext:(id)a0;
- (BOOL)checkFrequencyLimit;
- (void)beginCountdown:(id /* block */)a0;
- (void)slideTipsView;
- (void)updateWithTipsConfigs:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
