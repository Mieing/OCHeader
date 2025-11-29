@class WAEJTexture;

@interface WAEJCanvasPattern : NSObject <EJFillable>

@property (readonly, nonatomic) WAEJTexture *texture;
@property (readonly, nonatomic) int repeat;

- (id)initWithTexture:(id)a0 repeat:(int)a1;
- (void)dealloc;

@end
