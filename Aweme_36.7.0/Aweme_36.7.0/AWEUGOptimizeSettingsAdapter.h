@class NSString;

@interface AWEUGOptimizeSettingsAdapter : NSObject <BDXUGOptimizeSettingsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1 stable:(BOOL)a2;

@end
