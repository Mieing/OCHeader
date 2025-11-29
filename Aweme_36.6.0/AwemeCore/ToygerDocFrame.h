@interface ToygerDocFrame : ToygerFrame

@property (nonatomic) BOOL hasDoc;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) BOOL isReflected;
@property (nonatomic) BOOL isBlur;
@property (nonatomic) BOOL isCopy;
@property (nonatomic) float topScore;
@property (nonatomic) float bottomScore;
@property (nonatomic) float leftScore;
@property (nonatomic) float rightScore;
@property (nonatomic) BOOL topOK;
@property (nonatomic) BOOL bottomOK;
@property (nonatomic) BOOL leftOK;
@property (nonatomic) BOOL rightOK;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
