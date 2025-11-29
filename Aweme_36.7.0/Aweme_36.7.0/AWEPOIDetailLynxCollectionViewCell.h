@class NSString, AWEPOILynxContainerView;

@interface AWEPOIDetailLynxCollectionViewCell : UICollectionViewCell <AWEPOICubeViewDelegate, AWEPOIDetailAwemeWaterfallAwemeCellProtocol, AWEWaterFallCellProtocol>

@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long scene;

+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1;

- (void)willDisplaying;
- (void)updateCellWithModel:(id)a0 constData:(id)a1 index:(long long)a2;
- (id)p_getLynxDataFromModel:(id)a0;
- (id)p_extraParamsWithModel:(id)a0 constData:(id)a1;
- (void).cxx_destruct;
- (void)didEndDisplaying;

@end
