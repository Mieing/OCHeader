@class NSString;

@interface AWEFCoinBridgeOpenCoinRewardAdAgainMethod : DHBaseBridgeMethod

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *reqFrom;
@property (copy, nonatomic) NSString *token;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void).cxx_destruct;
- (long long)authType;
- (id)methodName;

@end
