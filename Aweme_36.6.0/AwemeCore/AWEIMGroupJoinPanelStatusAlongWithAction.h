@interface AWEIMGroupJoinPanelStatusAlongWithAction : NSObject

@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ statusChangeCompletionBlock;
@property (nonatomic) BOOL didClickJoin;

- (id)initWithStatus:(long long)a0 completion:(id /* block */)a1;
- (id)initWithStatus:(long long)a0 didClickJoin:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
