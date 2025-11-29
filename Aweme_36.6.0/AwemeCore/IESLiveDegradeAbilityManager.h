@class NSString, NSMapTable;
@protocol IESLiveSettings;

@interface IESLiveDegradeAbilityManager : NSObject <IESLiveDegradeService>

@property (retain, nonatomic) NSMapTable *levelAbilitiesTable;
@property (retain, nonatomic) id<IESLiveSettings> settingsService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)executeAbilities:(id)a0 inDegradeLevel:(unsigned long long)a1;
- (void)trackerAbilities:(id)a0 inDegradeLevel:(unsigned long long)a1 withParams:(id)a2;
- (void)resetDegradeAbilities;
- (id)degradeAbility:(unsigned long long)a0;
- (void)initDegradeAbilities;
- (void).cxx_destruct;
- (id)init;

@end
