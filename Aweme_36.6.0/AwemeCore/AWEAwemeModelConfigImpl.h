@interface AWEAwemeModelConfigImpl : NSObject

+ (void)_aweLazyRegisterLoad;
+ (void)configAdDedeuplicateSerialize;
+ (void)configEnableHashtag;
+ (void)configAwemeAddFakeChapter;
+ (void)configOptimizeMTLModelDidInit;
+ (void)configInit;
+ (void)configFixModelMergeInfiniteLoop;
+ (void)configDashVideoBitrateFix;
+ (void)configEnableFixXiguaRelatedBarModelTransformer;
+ (void)configFixVideoBSModelPlayAddrJSONTransformer;
+ (void)configFixVideoModelPlayURLJSONTransformer;

@end
