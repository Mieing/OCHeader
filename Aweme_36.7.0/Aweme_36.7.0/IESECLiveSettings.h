@class NSString;

@interface IESECLiveSettings : NSObject <IESECLiveSettings>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settings;

- (id)stringForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)numberForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)arrayForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)dictionaryForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)valueForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2;
- (id)numberForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)numberForKey:(id)a0 defaultValue:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0 defaultValue:(id)a1;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0 defaultValue:(id)a1;
- (id)stringForKey:(id)a0 defaultValue:(id)a1;

@end
