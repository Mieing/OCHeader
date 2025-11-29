@interface IESIMCombineShareEnhanceSettings : NSObject

@property (nonatomic) BOOL enableRef;
@property (nonatomic) BOOL inputUIOptimize;
@property (nonatomic) BOOL bulletJSBAdjust;

+ (id)sharedInstance;

- (id)initWithDict:(id)a0;

@end
