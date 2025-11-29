@class NSString;

@interface TVLSettingsManagerDataSource : NSObject <TVLSettingsManagerDataSource>

@property (nonatomic) BOOL allowsSettingsAutoUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDataSource;

- (void)updateCurrentSettings;
- (void)updateSettings:(BOOL)a0;
- (id)init;
- (id)currentSettings;
- (void)dealloc;

@end
