@class NSString;

@interface AWEProtectionSharedConfigDefaultImpl : NSObject <AWEProtectionSharedConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringWithKey:(long long)a0;
- (BOOL)boolWithKey:(long long)a0;
- (long long)intWithKey:(long long)a0;
- (double)doubleWithKey:(long long)a0;
- (id)arrayWithKey:(long long)a0;
- (id)dictWithKey:(long long)a0;

@end
