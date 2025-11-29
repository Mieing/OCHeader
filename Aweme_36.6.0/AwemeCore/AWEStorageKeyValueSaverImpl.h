@interface AWEStorageKeyValueSaverImpl : NSObject <IESPortraitKeyValueSaverProtocol>

+ (id)sharedInstance;

- (id)obtainKey:(id)a0;
- (void)saveKey:(id)a0 value:(id)a1;

@end
