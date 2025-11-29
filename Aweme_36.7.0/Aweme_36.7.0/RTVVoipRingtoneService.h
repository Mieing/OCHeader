@class NSString;

@interface RTVVoipRingtoneService : HTSService <RTVVoipRingtoneService, AWEUserMessage>

@property (retain, nonatomic) NSString *currentUserRingtone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)storeCurrentUserRingtone:(id)a0;
- (id)currentUserRingtoneCacheFileName;
- (BOOL)fileExist:(id)a0;
- (id)p_store_key;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
