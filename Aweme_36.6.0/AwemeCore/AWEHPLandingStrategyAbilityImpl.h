@class NSString, MMKV;
@protocol AWEHPLandingContextProtocol;

@interface AWEHPLandingStrategyAbilityImpl : NSObject <AWEHPLandingStrategyAbility>

@property (retain, nonatomic) MMKV *mmkv;
@property (weak, nonatomic) id<AWEHPLandingContextProtocol> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)readUserDataForKey:(id)a0;
- (void)writeUserData:(id)a0 forKey:(id)a1;
- (id)p_getCurrentUserId;
- (id)p_generateUserKey:(id)a0;
- (id)p_generateDeviceKey:(id)a0;
- (void)writeDeviceData:(id)a0 forKey:(id)a1;
- (id)readDeviceDataForKey:(id)a0;
- (void).cxx_destruct;

@end
