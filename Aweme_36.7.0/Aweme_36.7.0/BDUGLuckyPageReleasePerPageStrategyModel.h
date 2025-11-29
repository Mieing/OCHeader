@interface BDUGLuckyPageReleasePerPageStrategyModel : BDUGLuckyPageReleaseMemConditionModel

@property (nonatomic) double delay;
@property (nonatomic) BOOL releaseOnlyInTop;
@property (nonatomic) BOOL memoryWarningDisabled;
@property (nonatomic) BOOL otherPageAppearEnabled;
@property (nonatomic) BOOL otherPageOpenIosEnabled;

+ (id)keyMapper;

@end
