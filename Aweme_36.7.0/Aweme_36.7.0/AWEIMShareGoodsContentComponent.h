@class NSDictionary, NSString;

@interface AWEIMShareGoodsContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) NSDictionary *extraTrackerParams;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (id)ecomTrackParamsWithMsg:(id)a0;
- (void)trackEcomGoodsMsgShow;
- (void)p_didTapCard;
- (id)goodsMessage;
- (void)trackGoodsShareEventForName:(id)a0;
- (void)trackEcomGoodsMsgClick;
- (void).cxx_destruct;
- (id)displayMessage;

@end
