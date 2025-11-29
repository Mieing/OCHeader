@protocol AWEPlayInteractionContextUIAbility, AWEPlayInteractionContextToolAbility;

@interface AWEPlayInteractionContextAbilityConfig : NSObject

@property (retain, nonatomic) id<AWEPlayInteractionContextUIAbility> uiAbility;
@property (retain, nonatomic) id<AWEPlayInteractionContextToolAbility> toolAbility;

- (void).cxx_destruct;

@end
