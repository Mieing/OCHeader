@class NSString;
@protocol IESLiveSettings;

@interface IESLivePuzzleSettingWrapper : NSObject <PuzzleSettingsService, PuzzleUGStaticSettingsService>

@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueForKey:(id)a0 defaultValue:(id)a1;
- (void)getUGDynamicSettingsWithKeys:(id)a0 completion:(id /* block */)a1 waitInit:(BOOL)a2;
- (void)getUGSettingsWithKeys:(id)a0 completion:(id /* block */)a1 waitInit:(BOOL)a2;
- (BOOL)getUGSettingsBoolForKey:(id)a0;
- (id)getUGSettingsWithKeys:(id)a0;
- (void).cxx_destruct;
- (id)numberForKey:(id)a0 defaultValue:(id)a1;
- (id)dictionaryForKey:(id)a0 defaultValue:(id)a1;
- (id)arrayForKey:(id)a0 defaultValue:(id)a1;
- (id)stringForKey:(id)a0 defaultValue:(id)a1;

@end
