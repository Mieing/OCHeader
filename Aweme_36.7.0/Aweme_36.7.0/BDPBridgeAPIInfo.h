@class BDPBridgeAPI;

@interface BDPBridgeAPIInfo : NSObject

@property (retain, nonatomic) BDPBridgeAPI *API;
@property (nonatomic) BOOL isSynchronous;
@property (nonatomic) BOOL isOnMainThread;
@property (nonatomic) BOOL isIgnoreCallBack;
@property (nonatomic) BOOL isOnCurrentThread;
@property (nonatomic) BOOL isWukong;
@property (retain, nonatomic) Class implClass;

- (void).cxx_destruct;

@end
