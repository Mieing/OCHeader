@class NSString;

@interface KindaUserService : NSObject <MMKUserService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUserInfo:(id)a0;
- (id)province;
- (id)city;
- (long long)localBalance;
- (void)updateBalance:(long long)a0;
- (void)updateLqtBalance:(long long)a0;

@end
