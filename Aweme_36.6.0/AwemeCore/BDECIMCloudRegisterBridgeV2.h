@class NSString;
@protocol BDECIMCloudCoreBridgeManagerInterface;

@interface BDECIMCloudRegisterBridgeV2 : NSObject <TIMXAppMessageInsertPluginProtocol, TIMXStatisticProtocol>

@property (weak) id<BDECIMCloudCoreBridgeManagerInterface> bridgeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMap;
+ (id)instanceWithBusinessID:(id)a0;
+ (id)sharedLock;

- (void)processMessages:(id)a0;
- (BOOL)filterMessage:(id)a0 reason:(id)a1;
- (BOOL)filterMessage:(id)a0;
- (void)pullerInsertNewMessages:(id)a0 reason:(id)a1 context:(id)a2;
- (void)dealMessageWhenWebsocketArrive:(id)a0;
- (void)didReceiveTimestamp:(id)a0;
- (void).cxx_destruct;

@end
