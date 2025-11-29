@interface MMKSize : NSObject

@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;

+ (id)KSizeWithWidth:(float)a0 height:(float)a1;

- (id)initWithWidth:(float)a0 height:(float)a1;
- (id)description;

@end
