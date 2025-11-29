@class NSString, IESLiveLooperBannerView, IESLiveGuideLooperBannerView;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveLooperBannerFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveGuideLooperBannerViewDelegate>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) IESLiveLooperBannerView *bannerView;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) IESLiveGuideLooperBannerView *looperBannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (id)liveTypeStr;
- (void)setupBannerView;
- (void)didSelectBanner:(id)a0;
- (void)willShowBanner:(id)a0;
- (void)setupLoopBanner;
- (struct CGSize { double x0; double x1; })bannerViewSize;
- (int)tabForLiveType:(unsigned long long)a0;
- (void)trackBanner:(id)a0 bannerInfo:(id)a1 isActivity:(BOOL)a2;
- (void).cxx_destruct;

@end
