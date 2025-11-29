@interface TIMXPBNGetRecentMsgVersionRange : GPBMessage

@property (nonatomic) long long leftSide;
@property (nonatomic) BOOL hasLeftSide;
@property (nonatomic) long long rightSide;
@property (nonatomic) BOOL hasRightSide;

+ (id)descriptor;

- (long long)rightSide;
- (long long)leftSide;

@end
