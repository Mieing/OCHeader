@class NSString, NSUserDefaults;

@interface GULHeartbeatDateStorageUserDefaults : NSObject <GULHeartbeatDateStorable>

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)heartbeatDateForTag:(id)a0;
- (BOOL)setHearbeatDate:(id)a0 forTag:(id)a1;
- (id)heartbeatDictionaryFromDefaults;
- (void).cxx_destruct;
- (id)initWithDefaults:(id)a0 key:(id)a1;

@end
