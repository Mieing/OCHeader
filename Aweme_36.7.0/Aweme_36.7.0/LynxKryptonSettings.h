@class NSString;

@interface LynxKryptonSettings : NSObject <KryptonSettingsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)intValueForKey:(id)a0 defaultValue:(int)a1;
- (id)objectValueForKey:(id)a0 defaultValue:(id)a1;
- (BOOL)boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)stringValueForKey:(id)a0 defaultValue:(id)a1;
- (double)doubleValueForKey:(id)a0 defaultValue:(double)a1;

@end
