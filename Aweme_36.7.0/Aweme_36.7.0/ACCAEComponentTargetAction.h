@interface ACCAEComponentTargetAction : NSObject

@property (weak, nonatomic) id invokeTarget;
@property (nonatomic) SEL clickActionSelector;
@property (nonatomic) SEL uiConfigSelector;
@property (nonatomic) SEL accessibilityConfigSelector;
@property (nonatomic) SEL statusSelector;

- (void).cxx_destruct;

@end
