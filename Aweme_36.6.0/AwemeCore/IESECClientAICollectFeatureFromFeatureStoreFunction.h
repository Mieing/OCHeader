@class NSString;

@interface IESECClientAICollectFeatureFromFeatureStoreFunction : NSObject <IESECClientAICustomCollectFunctionProtocol>

@property (copy, nonatomic) NSString *functionKey;
@property (copy, nonatomic) id /* block */ function;

- (void).cxx_destruct;

@end
