@interface MBFrameSetPosition : WXPBGeneratedMessage

@property (nonatomic) int left;
@property (nonatomic) int top;
@property (nonatomic) int width;
@property (nonatomic) int height;

+ (void)initialize;

- (void)setHeight:(int)a0;
- (int)height;
- (void)setWidth:(int)a0;
- (int)width;
- (void)setTop:(int)a0;
- (int)top;
- (void)setLeft:(int)a0;
- (int)left;

@end
