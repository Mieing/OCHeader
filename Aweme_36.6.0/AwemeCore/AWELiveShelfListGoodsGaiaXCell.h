@class GXTemplateItem, NSString, UIView, AWELiveShelfListGoodsGaiaXModel, AWELiveShelfPagingDataController;
@protocol GXRootViewProtocal;

@interface AWELiveShelfListGoodsGaiaXCell : UICollectionViewCell <GXEventProtocal, GXTrackProtocal>

@property (retain, nonatomic) AWELiveShelfListGoodsGaiaXModel *model;
@property (retain, nonatomic) UIView<GXRootViewProtocal> *templateView;
@property (retain, nonatomic) GXTemplateItem *templateItem;
@property (nonatomic) BOOL hasReportBindDuration;
@property (copy, nonatomic) id /* block */ gaiaXCardEventBlock;
@property (copy, nonatomic) id /* block */ cardHeightChangeBlock;
@property (weak, nonatomic) AWELiveShelfPagingDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)gx_onManualExposureTrackEvent:(id)a0;
- (void)gx_relayoutFinished:(id)a0;
- (void)gx_onGestureEvent:(id)a0;
- (void)gx_animationDidFinished:(id)a0;
- (id)getDSLItemFrameWithId:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupSubviews;
- (void)onDisappear;
- (void)onAppear;

@end
