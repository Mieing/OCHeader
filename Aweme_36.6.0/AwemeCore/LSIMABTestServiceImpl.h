@class NSString;

@interface LSIMABTestServiceImpl : NSObject <LSIMBizCABService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolForlibraKey:(id)a0 stable:(BOOL)a1 defaultData:(BOOL)a2;
- (long long)integerForlibraKey:(id)a0 stable:(BOOL)a1 defaultData:(long long)a2;
- (double)floatForlibraKey:(id)a0 stable:(BOOL)a1 defaultData:(double)a2;
- (id)stringForlibraKey:(id)a0 stable:(BOOL)a1 defaultData:(id)a2;
- (id)dictionaryForlibraKey:(id)a0 stable:(BOOL)a1 defaultData:(id)a2;
- (id)arrayForlibraKey:(id)a0 stable:(BOOL)a1 defaultData:(id)a2;
- (BOOL)enableBoxOpt;

@end
