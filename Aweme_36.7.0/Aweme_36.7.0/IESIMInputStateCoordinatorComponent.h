@class NSString;
@protocol IESIMInputLayoutComponentInterface;

@interface IESIMInputStateCoordinatorComponent : AWEIMComponentBase <IESIMInputStateCoordinatorComponentInterface>

@property (retain, nonatomic) id<IESIMInputLayoutComponentInterface> layoutComponent;
@property (nonatomic) long long oldState;
@property (nonatomic) long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_adjustComponentsToState:(long long)a0;
- (void).cxx_destruct;
- (void)changeToState:(long long)a0;

@end
