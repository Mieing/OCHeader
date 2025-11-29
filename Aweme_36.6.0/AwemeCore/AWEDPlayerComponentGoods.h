@class NSString;
@protocol AWEPlayGoodsBackgroundVideoManagerInterface;

@interface AWEDPlayerComponentGoods : AWEDPlayerBaseComponent <AWEDPlayerComponentGoodsProtocol>

@property (retain, nonatomic) id<AWEPlayGoodsBackgroundVideoManagerInterface> playGoodsBackgroundVideoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)updatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)updatePlayerIfNeeded;
- (void)prepareForDisplayWithoutCoverImage;
- (void)updateLoadingViewForGoodsVideo;
- (void)prepareToPlayGoodsBackgroundVideo;
- (void)updatePlayerViewCornerRadiusForGoodsVideo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })goodsVideoPlayerFrame;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;

@end
