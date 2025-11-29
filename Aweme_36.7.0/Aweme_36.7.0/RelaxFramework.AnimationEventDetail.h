@class NSString;

@interface RelaxFramework.AnimationEventDetail : NSObject {
    void /* function */ animationName;
    void /* function */ animationType;
}

@property (nonatomic, copy) NSString *animationName;
@property (nonatomic, copy) NSString *animationType;

- (id)initWithAnimationName:(id)a0 animationType:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
