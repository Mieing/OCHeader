@class NSString, IESGCPDetailTestGameApplyButtonThemeConfig;

@interface IESGCPTestGameApplyButtonViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber>

@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *applyUrl;
@property (copy, nonatomic) NSString *planID;
@property (nonatomic) BOOL isApplied;
@property (nonatomic) BOOL isSupportIOSApply;
@property (retain, nonatomic) IESGCPDetailTestGameApplyButtonThemeConfig *halfScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailTestGameApplyButtonThemeConfig *fullScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailTestGameApplyButtonThemeConfig *currentThemeConfig;
@property (copy, nonatomic) id /* block */ themeConfigDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (void)handleButtonDidClick;
- (id)gradientThemeConfigWithProgress:(double)a0;
- (void)updateCurrentThemeConfigs;
- (void)updateApplyButtonState:(unsigned long long)a0;
- (id)testGameApplyButtonConfigFromState:(unsigned long long)a0 useHalfScreenConfig:(BOOL)a1;
- (id)currTestGameApplyButtonConfigFromState:(unsigned long long)a0;
- (void)openURLView;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
