@class IESGCPDetailReserveButtonThemeConfig, NSString, IESGCPPBGameDetailReserveButtonV2;

@interface IESGCPDetailReserveButtonViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber>

@property (retain, nonatomic) IESGCPPBGameDetailReserveButtonV2 *buttonData;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) IESGCPDetailReserveButtonThemeConfig *halfScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailReserveButtonThemeConfig *fullScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailReserveButtonThemeConfig *currentThemeConfig;
@property (copy, nonatomic) id /* block */ themeConfigDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (id)gradientThemeConfigWithProgress:(double)a0;
- (void)reserveGameWithShowLoadingInView:(id)a0 completeBlock:(id /* block */)a1;
- (void)cancelReserveGameWithLynxView;
- (void)updateReserveState:(unsigned long long)a0;
- (BOOL)isBetaTestReserve;
- (unsigned long long)getDefaultReserveState;
- (void)updateCurrentThemeConfigs;
- (id)reserveButtonThemeConfigFrom:(unsigned long long)a0 useHalfScreenConfig:(BOOL)a1;
- (id)currReserveButtonThemeConfigFrom:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
