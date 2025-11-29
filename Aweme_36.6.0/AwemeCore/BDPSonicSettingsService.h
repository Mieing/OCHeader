@class NSString, BDPUniqueID;

@interface BDPSonicSettingsService : NSObject <SonicSettingsService>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryValueForKey:(id)a0 defaultValue:(id)a1;
- (long long)intValueForKey:(id)a0 defaultValue:(long long)a1;
- (id)arrayValueForKey:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;
- (BOOL)boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)stringValueForKey:(id)a0 defaultValue:(id)a1;
- (id)initWithUniqueID:(id)a0;
- (double)doubleValueForKey:(id)a0 defaultValue:(double)a1;

@end
