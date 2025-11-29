@class NSString;

@interface IESLiveRealTimeFeatureApi : HTSLiveApi

@property (copy, nonatomic) NSString *baseUrl;

- (void)fetch:(id)a0 completionHandler:(id /* block */)a1 tintTags:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
