@interface TIMXPBNGetRecentConvAndMsgRequestBody : GPBMessage

@property (nonatomic) long long leftSide;
@property (nonatomic) BOOL hasLeftSide;
@property (nonatomic) long long rightSide;
@property (nonatomic) BOOL hasRightSide;
@property (nonatomic) int direction;
@property (nonatomic) BOOL hasDirection;

+ (id)descriptor;

- (void)setDirection:(int)a0;
- (void)setRightSide:(long long)a0;
- (void)setLeftSide:(long long)a0;

@end
