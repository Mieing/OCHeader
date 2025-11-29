@class NSDictionary;

@interface AWEIMShareGoodsMessageViewModel : AWEIMMessageViewModel

@property (retain, nonatomic) NSDictionary *extraTrackerParams;

- (void)willDisplayByMessageVisibleLifeCycle;
- (id)ecomTrackParamsWithMsg:(id)a0;
- (void)trackEcomGoodsMsgShow;
- (void)updateEcomGoodsMsgShowExtraParams:(id)a0;
- (void).cxx_destruct;

@end
