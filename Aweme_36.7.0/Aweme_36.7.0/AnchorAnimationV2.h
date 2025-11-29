@interface AnchorAnimationV2 : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long delay;
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) long long playProgress;
@property (nonatomic) BOOL hasPlayProgress;

+ (id)descriptor;

- (long long)delay;
- (int)type;

@end
