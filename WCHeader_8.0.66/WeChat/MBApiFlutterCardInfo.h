@interface MBApiFlutterCardInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isRecCard;
@property (nonatomic) int pos;
@property (nonatomic) int subPos;

+ (void)initialize;

- (void)setSubPos:(int)a0;
- (int)subPos;
- (void)setPos:(int)a0;
- (int)pos;
- (void)setIsRecCard:(BOOL)a0;
- (BOOL)isRecCard;

@end
