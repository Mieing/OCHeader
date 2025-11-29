@interface WCFinderTransaction : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) long long state;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL autoCommitWhenDealloc;
@property (retain, nonatomic) id extObj1;

+ (id)transactionAction:(id /* block */)a0 autoCommit:(BOOL)a1;
+ (id)transactionAction:(id /* block */)a0;

- (void)dealloc;
- (void)commit:(long long)a0;
- (void)commit;
- (void)commitCancel;
- (BOOL)isPending;
- (BOOL)isCancel;
- (BOOL)isDone;
- (id)description;
- (id)stringForState:(long long)a0;
- (void).cxx_destruct;

@end
