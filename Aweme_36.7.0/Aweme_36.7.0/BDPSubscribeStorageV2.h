@class NSRecursiveLock;
@protocol BDPKVInterface;

@interface BDPSubscribeStorageV2 : NSObject

@property (retain, nonatomic) id<BDPKVInterface> userStorage;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedInstance;

- (id)getAskedTemplateIds:(id)a0;
- (id)getSubscribeTempleWithUniqueID:(id)a0 tplList:(id)a1;
- (id)mainSwitchStatus:(id)a0;
- (void)setMainSwitchEnable:(BOOL)a0 uniqueID:(id)a1;
- (void)setSubscribePopupInfoWithUniqueID:(id)a0 infos:(id)a1;
- (void)setSubscribeTempleWithUniqueID:(id)a0 temples:(id)a1;
- (id)getSubscribePopupInfoWithUniqueID:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
