@class NSString, IESECShopLiveHeaderLiveInfoView, UIView;
@protocol IESECLivePlayer;

@interface IESECShopHeaderLiveView : IESECShopMonitorActionView <IESECLivePlayerViewDelegate>

@property (retain, nonatomic) UIView<IESECLivePlayer> *livePlayerView;
@property (retain, nonatomic) IESECShopLiveHeaderLiveInfoView *liveInfoView;
@property (nonatomic) unsigned long long loadState;
@property (nonatomic) double livePlayerBottomOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
