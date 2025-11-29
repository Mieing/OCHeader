@class NSMapTable;

@interface IESLivePlayerControllerEffectManager : NSObject

@property (retain, nonatomic) NSMapTable *playerBlocks;
@property (retain, nonatomic) NSMapTable *playerTypeInitializationStatus;
@property (retain, nonatomic) NSMapTable *playerCachedParameters;

+ (id)shareManager;

- (void)setEffectEnable:(BOOL)a0 block:(id /* block */)a1 key:(id)a2 player:(id)a3 completion:(id /* block */)a4;
- (void)removeEffectBlockWithPlayer:(id)a0;
- (void)reSendConfigMessageWithType:(id)a0 forPlayer:(id)a1;
- (void)checkInitMessageWithUserData:(id)a0 msgID:(long long)a1 arg1:(long long)a2 arg2:(long long)a3 arg3:(id)a4 forPlayer:(id)a5;
- (void)notifyMessageWithUserData:(id)a0 msgID:(long long)a1 arg1:(long long)a2 arg2:(long long)a3 arg3:(id)a4 forPlayer:(id)a5;
- (void)initializeTypeStatusForPlayer:(id)a0;
- (void)setTypeStatusToNoWithType:(id)a0 forPlayer:(id)a1;
- (void)cacheMessageParametersWithUserData:(id)a0 msgID:(long long)a1 arg1:(long long)a2 arg2:(long long)a3 arg3:(id)a4 forPlayer:(id)a5;
- (void)simulateMessageReceptionToBlockForPlayer:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
