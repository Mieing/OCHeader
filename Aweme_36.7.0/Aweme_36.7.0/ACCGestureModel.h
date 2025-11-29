@class NSString, UIGestureRecognizer;

@interface ACCGestureModel : NSObject

@property (nonatomic) unsigned long long cameraGestureType;
@property (nonatomic) unsigned long long effectGestureType;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) UIGestureRecognizer *recognizer;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ shouldEnabledBlock;
@property (copy, nonatomic) id /* block */ shouReceiveTouchBlock;
@property (copy, nonatomic) id /* block */ shouldBeginBlock;
@property (copy, nonatomic) id /* block */ simultaneouslyWithOtherBlock;
@property (copy, nonatomic) id /* block */ requireFailureWithOtherBlock;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *customTag;

+ (id)modelWithEffectGestureType:(unsigned long long)a0 containerView:(id)a1 action:(id /* block */)a2;
+ (BOOL)configGesture:(id)a0 withCurrentProp:(id)a1;
+ (id)modelWithCameraGestureType:(unsigned long long)a0 action:(id /* block */)a1;

- (id)initWithRecognizer:(id)a0 type:(unsigned long long)a1;
- (BOOL)isEffectGesture;
- (void)configUnforcedEnabled:(BOOL)a0;
- (id)initWithRecognizer:(id)a0 type:(unsigned long long)a1 priority:(unsigned long long)a2 action:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)a0;

@end
