@class NSString;

@interface IESLiveStrategyApi : HTSLiveApi

@property (copy, nonatomic) NSString *baseUrl;

- (void)fetch:(id)a0 completionHandler:(id /* block */)a1 tintTags:(id)a2;
- (void)fetchStrategy:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2 tintTags:(id)a3;
- (void)fetchSDKExperimentKeysWithTintTags:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
