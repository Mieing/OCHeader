@class BDUGLuckyPageReleaseMemConditionModel, NSDictionary, BDUGLuckyPageReleaseMemCheckerModel, BDUGLuckyPageReleaseNativeHookModel, BDUGLuckyPageReleaseOtherPageAppearStrategyModel;
@protocol BDUGLuckyPageReleaseMemConditionModel, BDUGLuckyPageReleasePerPageStrategyModel;

@interface BDUGLuckyPageReleaseSettingsModel : BDUGLuckyJSONModel

@property (nonatomic) BOOL pageReleaseEnable;
@property (retain, nonatomic) BDUGLuckyPageReleaseMemCheckerModel *memoryCheckerSetting;
@property (retain, nonatomic) BDUGLuckyPageReleaseNativeHookModel *nativeHookIos;
@property (retain, nonatomic) BDUGLuckyPageReleaseMemConditionModel *memoryWarningStrategy;
@property (copy, nonatomic) NSDictionary<BDUGLuckyPageReleaseMemConditionModel> *otherPageOpenIosStrategy;
@property (retain, nonatomic) BDUGLuckyPageReleaseOtherPageAppearStrategyModel *otherPageAppearStrategy;
@property (copy, nonatomic) NSDictionary<BDUGLuckyPageReleasePerPageStrategyModel> *pageHideStrategy;

- (void).cxx_destruct;

@end
