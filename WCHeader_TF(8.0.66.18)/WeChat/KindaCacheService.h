@class NSString;

@interface KindaCacheService : NSObject <MMKCacheService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)set:(id)a0 data:(id)a1 ttl:(long long)a2;
- (id)get:(id)a0;
- (BOOL)remove:(id)a0;
- (void)setBool:(id)a0 data:(BOOL)a1 ttl:(long long)a2;
- (BOOL)getBool:(id)a0;
- (long long)getInt64:(id)a0 defaultValue:(long long)a1;
- (void)setInt64:(id)a0 data:(long long)a1 ttl:(long long)a2;
- (id)getFilePath:(id)a0;

@end
