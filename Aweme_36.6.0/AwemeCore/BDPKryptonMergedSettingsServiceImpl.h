@class NSString, BDPUniqueID;

@interface BDPKryptonMergedSettingsServiceImpl : NSObject <KryptonSettingsService> {
    BDPUniqueID *_uniqueID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)intValueForKey:(id)a0 defaultValue:(int)a1;
- (id)objectValueForKey:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;
- (BOOL)boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)stringValueForKey:(id)a0 defaultValue:(id)a1;
- (id)initWithUniqueID:(id)a0;
- (double)doubleValueForKey:(id)a0 defaultValue:(double)a1;

@end
