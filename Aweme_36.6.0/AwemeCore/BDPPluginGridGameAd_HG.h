@class NSString, NSMutableDictionary, BDPGameJumpingView_HG;

@interface BDPPluginGridGameAd_HG : BDPBridgeInstancePlugin <BDPGameJumpingView_HGDelegate>

@property (retain, nonatomic) BDPGameJumpingView_HG *gameJumpingViewSmall;
@property (retain, nonatomic) BDPGameJumpingView_HG *gameJumpingViewMedium;
@property (retain, nonatomic) BDPGameJumpingView_HG *gameJumpingViewLarge;
@property BOOL isRequesting;
@property (retain, nonatomic) NSMutableDictionary *isSeparateRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickGameJumpingViewCloseButton:(id)a0;
- (void)showGamePanelWithUniqueID:(id)a0 param:(id)a1 calledBy:(long long)a2 callback:(id /* block */)a3;
- (void)onStatusChanged:(id)a0 state:(id)a1 errMsg:(id)a2 operateId:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMainViewFrameWithSize:(id)a0 position:(id)a1 task:(id)a2;
- (void)changeSizeForGridView:(id)a0 size:(id)a1;
- (void)requestGridGame:(id)a0 gameJumpingView:(id)a1 count:(long long)a2 operateId:(id)a3 calledBy:(long long)a4 callback:(id /* block */)a5;
- (void)operateGamePanelWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateGridGamePanelWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
