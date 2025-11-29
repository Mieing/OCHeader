@class NSString, NSNumber;
@protocol IESLiveDFDisplayLinkAnimation;

@interface IESLiveDFAnimationNode : NSObject

@property (retain, nonatomic) id<IESLiveDFDisplayLinkAnimation> animaton;
@property (copy, nonatomic) NSString *animationKey;
@property (weak, nonatomic) id object;
@property (retain, nonatomic) NSNumber *objectKey;
@property (nonatomic) long long currentFrameIndex;

+ (id)nodeAnimation:(id)a0 object:(id)a1 objectKey:(id)a2 animationKey:(id)a3;

- (id)initWithAnimation:(id)a0 object:(id)a1 objectKey:(id)a2 animationKey:(id)a3;
- (void).cxx_destruct;
- (id)description;

@end
