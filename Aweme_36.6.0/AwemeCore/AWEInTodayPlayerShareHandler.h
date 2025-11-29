@interface AWEInTodayPlayerShareHandler : NSObject

@property (nonatomic) BOOL isSharing;

- (id)referString;
- (void)showLongPressShareVCWithFromClick:(BOOL)a0 model:(id)a1 publishClick:(id /* block */)a2;
- (void)showNewPressPanelWithAweme:(id)a0 publishClick:(id /* block */)a1 scene:(id)a2;
- (void)shareWithPlayerTileModel:(id)a0 fromClick:(BOOL)a1 publishClick:(id /* block */)a2;

@end
