@class IESLiveMultiLinkerApi, IESLiveRevenueInteractEnlargeActionModel;
@protocol IESLiveRevenueInteractProvider;

@interface IESLiveRevenueInteractEnlargeActionPanel : UIView

@property (retain, nonatomic) IESLiveMultiLinkerApi *api;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> provider;
@property (retain, nonatomic) IESLiveRevenueInteractEnlargeActionModel *model;

- (void)trackItemClick:(id)a0;
- (id)clickPositionForTrack;
- (void)requestUpdateLayoutWithAction:(int)a0 anchorUIOperationLayout:(int)a1;
- (id)initWithDiContext:(id)a0 model:(id)a1 provider:(id)a2;
- (void)trackBannerShow:(id)a0 allString:(id)a1;
- (void).cxx_destruct;
- (void)show;

@end
