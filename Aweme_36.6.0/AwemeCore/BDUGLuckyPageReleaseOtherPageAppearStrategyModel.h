@class NSDictionary;
@protocol BDUGLuckyPageReleaseMemConditionModel, BDUGLuckyPageReleaseMemConditionNativePageModel;

@interface BDUGLuckyPageReleaseOtherPageAppearStrategyModel : BDUGLuckyJSONModel

@property (copy, nonatomic) NSDictionary<BDUGLuckyPageReleaseMemConditionModel> *frontendScenes;
@property (copy, nonatomic) NSDictionary<BDUGLuckyPageReleaseMemConditionNativePageModel> *nativeScenes;

- (void).cxx_destruct;

@end
