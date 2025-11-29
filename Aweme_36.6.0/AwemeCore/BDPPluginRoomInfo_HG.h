@protocol BDPAwemeRoomInfoPluginDelegate;

@interface BDPPluginRoomInfo_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) id<BDPAwemeRoomInfoPluginDelegate> roomInfoPlugin;

- (BOOL)isLogin:(id)a0;
- (void)getRoomInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
