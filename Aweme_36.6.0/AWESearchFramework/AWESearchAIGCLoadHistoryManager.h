@interface AWESearchAIGCLoadHistoryManager : NSObject

@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) long long roundNum;

- (BOOL)enableLoading;
- (BOOL)checkNeedWhenDisplayWithViewModel:(id)a0;
- (void)completeHistoryLoadWithRound:(long long)a0 state:(unsigned long long)a1;
- (id)init;
- (void)beginLoading;

@end
