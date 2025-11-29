@class EffectPlatform;

@interface LVDraftMigrationContext : NSObject

@property (class, copy, nonatomic) id /* block */ gameplayReshapeFechter;

@property (readonly, nonatomic) EffectPlatform *effectPlatform;

+ (id)shared;

@end
