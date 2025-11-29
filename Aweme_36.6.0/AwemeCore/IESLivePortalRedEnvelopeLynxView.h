@class IESLiveReceivePortalModel, IESLivePortalStore;
@protocol IESLivePortalActions;

@interface IESLivePortalRedEnvelopeLynxView : IESLivePortalLynxView <HTSLivePluginLayoutView>

@property (retain, nonatomic) id<IESLivePortalActions> portalActionCreator;
@property (nonatomic) long long count;
@property (retain, nonatomic) IESLiveReceivePortalModel *redEnvelopeInfo;
@property (retain, nonatomic) IESLivePortalStore *store;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)a0;
- (void)updateRedEnvelopeInfo:(id)a0 total:(long long)a1;
- (void)updateStatus:(long long)a0 countDown:(long long)a1 badgeNumber:(long long)a2;
- (void)tr_receivedRedPacketReadyEvent;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
