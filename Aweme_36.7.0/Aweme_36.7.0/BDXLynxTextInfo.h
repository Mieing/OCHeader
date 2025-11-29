@class NSDictionary;

@interface BDXLynxTextInfo : NSObject

@property (nonatomic) long long sign;
@property (nonatomic) long long parentSign;
@property (readonly, nonatomic) BOOL ignoreFocus;
@property (readonly, nonatomic) BOOL enableTouchPseudoPropagation;
@property (readonly, nonatomic) int eventThrough;
@property (readonly, nonatomic) int pointerEvents;
@property (readonly, nonatomic) NSDictionary *eventSet;

- (id)initWithShadowNode:(id)a0;
- (void).cxx_destruct;

@end
