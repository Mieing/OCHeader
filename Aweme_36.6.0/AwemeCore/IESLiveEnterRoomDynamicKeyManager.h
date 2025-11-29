@class NSMutableSet;

@interface IESLiveEnterRoomDynamicKeyManager : NSObject

@property (retain, nonatomic) NSMutableSet *dynamicKeys;

+ (id)sharedManager;

- (void)addDynamicEventParam:(id)a0;
- (BOOL)checkIsEventDynamicKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
