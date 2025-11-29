@class IESLiveAudienceContainerContext;

@interface IESLiveAudienceVendorPlugin : IESLiveAudiencePlugin

@property (retain, nonatomic) IESLiveAudienceContainerContext *context;

- (void)reuseWithContext:(id)a0;
- (void)didCloseRoomWithType:(unsigned long long)a0 willReuse:(BOOL)a1;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;
- (void)viewWillAppear;

@end
