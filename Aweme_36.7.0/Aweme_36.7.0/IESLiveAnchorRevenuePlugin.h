@class IESLiveRevenueActionsAdapterHandler, NSString;

@interface IESLiveAnchorRevenuePlugin : IESLiveAnchorBizPlugin <IESLiveRevenueInteractAction>

@property (retain, nonatomic) IESLiveRevenueActionsAdapterHandler *revenueActionsAdapterHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)bindService;
- (void)setupHorizontalBlurBGPreview;
- (void)cleanupHorizontalBlurBGPreview;
- (void).cxx_destruct;
- (void)setup;

@end
