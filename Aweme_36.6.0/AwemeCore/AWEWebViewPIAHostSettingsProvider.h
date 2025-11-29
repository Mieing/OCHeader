@class NSString;

@interface AWEWebViewPIAHostSettingsProvider : NSObject <PIAInterfaceHostSettingsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)pia_objectValueForKey:(id)a0;
- (BOOL)pia_boolValueForKey:(id)a0 defaultValue:(long long)a1;
- (long long)pia_integerValueForKey:(id)a0 defaultValue:(long long)a1;
- (float)pia_floatValueForKey:(id)a0 defaultValue:(long long)a1;
- (id)pia_dictionaryValueForKey:(id)a0;
- (id)pia_stringValueForKey:(id)a0;
- (id)pia_arrayValueForKey:(id)a0;

@end
