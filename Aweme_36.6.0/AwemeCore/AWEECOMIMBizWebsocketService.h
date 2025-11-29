@class NSMutableDictionary;

@interface AWEECOMIMBizWebsocketService : NSObject

@property (retain) NSMutableDictionary *wsUniqueKeyDict;

+ (id)shared;

- (void)uploadPoorReplayEvent:(id)a0 completion:(id /* block */)a1;
- (void)processWSMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
