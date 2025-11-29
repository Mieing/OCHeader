@class IESLiveRevenueActionsAdapterHandler;

@interface IESLiveAudienceRevenuePlugin : IESLiveAudiencePlugin

@property (retain, nonatomic) IESLiveRevenueActionsAdapterHandler *revenueActionsAdapterHandler;

- (void)reuseWithContext:(id)a0;
- (void)didLoadRoomWithReuseFlag:(BOOL)a0;
- (void)didCloseRoomWithType:(unsigned long long)a0 willReuse:(BOOL)a1;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;
- (void)commonInit;

@end
