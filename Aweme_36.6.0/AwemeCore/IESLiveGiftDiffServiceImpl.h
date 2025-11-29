@class NSString;
@protocol IESLiveStreamCaptureProvider;

@interface IESLiveGiftDiffServiceImpl : NSObject <IESLiveGiftDiffService>

@property (retain, nonatomic) id<IESLiveStreamCaptureProvider> streamCaptureProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)audioDrivePictureEffect_destroyHandler;
- (id)audioDrivePictureEffect_prepareHandlerWithUseInMic:(BOOL)a0 useInMusic:(BOOL)a1;
- (Class)giftAuthorizeGuideCellClass;
- (id)getGiftAuthorizeGuideItemWithGiftPanelDataSharing:(id)a0;
- (id)getGiftDiamondChangeItemWithGiftPanelDataSharing:(id)a0;
- (id)getGiftDiamondChangeCellWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldEnterDanmukuModeWithRoom:(id)a0;
- (void)showMostlyUsedTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2;
- (void).cxx_destruct;

@end
