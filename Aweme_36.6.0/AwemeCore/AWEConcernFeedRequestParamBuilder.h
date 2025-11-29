@class NSArray;

@interface AWEConcernFeedRequestParamBuilder : NSObject

@property (retain, nonatomic) NSArray *providers;
@property (nonatomic) double lastEnterTabTimeStamp;

+ (void)p_insertDebugParamsInDictionary:(id)a0;
+ (id)providerClass;

- (id)paramsForPullType:(long long)a0;
- (id)forceInsertParamProvider;
- (id)throughPassParamProvider;
- (void)setupProviders;
- (void).cxx_destruct;
- (id)init;

@end
