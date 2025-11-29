@interface MBApiScrollData : WXPBGeneratedMessage

@property (nonatomic) int offsetHeight;
@property (nonatomic) int offsetTop;
@property (nonatomic) int offsetTopFromListStart;

+ (void)initialize;

- (void)setOffsetTopFromListStart:(int)a0;
- (int)offsetTopFromListStart;
- (void)setOffsetTop:(int)a0;
- (int)offsetTop;
- (void)setOffsetHeight:(int)a0;
- (int)offsetHeight;

@end
