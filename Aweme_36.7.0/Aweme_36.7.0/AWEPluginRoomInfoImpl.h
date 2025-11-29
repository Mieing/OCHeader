@class NSString;
@protocol BDPNetworkTaskProtocol;

@interface AWEPluginRoomInfoImpl : NSObject <BDPAwemeRoomInfoPluginDelegate>

@property (retain, nonatomic) id<BDPNetworkTaskProtocol> getRoomInfoNetRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)bdp_getRoomInfoForUniqueID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
