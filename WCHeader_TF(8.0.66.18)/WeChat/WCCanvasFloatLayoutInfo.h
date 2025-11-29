@interface WCCanvasFloatLayoutInfo : MMObject <NSCoding>

@property (nonatomic) BOOL autoShow;
@property (nonatomic) BOOL noAnimation;
@property (nonatomic) BOOL forbiddenToClose;
@property (nonatomic) BOOL noBackground;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
