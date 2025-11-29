@class IESECGoodsDetailCommonMeta, IESECGoodsDetailComponentUIConfig, NSString, IESECPdpUIVerifyManager, IESECTracker, IESECGoodsDetailSKUManager, NSMutableDictionary, IESECGoodsDetailComponentScaleConfig;

@interface IESECGoodsDetailPageBaseViewModel : NSObject <IGListDisplayDelegate>

@property (copy, nonatomic) NSString *componentUID;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) id dataModel;
@property (retain, nonatomic) id metaModel;
@property (retain, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;
@property (retain, nonatomic) IESECGoodsDetailSKUManager *skuManager;
@property (retain, nonatomic) IESECPdpUIVerifyManager *uiVerifyManager;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECGoodsDetailComponentUIConfig *uiConfig;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (weak, nonatomic) NSMutableDictionary *goodsSharedDictionary;
@property (retain, nonatomic) IESECGoodsDetailComponentScaleConfig *scaleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)updateDataModel:(id)a0;
- (void)updateModelWithEpInfo:(id)a0;
- (void)setupCurrentViewSize;
- (BOOL)needEnlarged;
- (double)enlargeStandardSize;
- (double)largeModeViewScale;
- (double)largeModeFontScale;
- (void)updateMetaModel:(id)a0;
- (void)updateModelWithSkuManager;
- (void)trackShowEvent:(id)a0 withComponentTrackParams:(id)a1;
- (void)resizeViewSize;
- (void).cxx_destruct;
- (double)scaleFactor;

@end
