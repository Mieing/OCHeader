@class NSString, AWEPOISpuModel, NSDictionary, AWEPOIOrderCardModel, AWEDitoPOIFavoritePageContext;

@interface AWEDitoPOIFavoriteOrderCellViewModel : DitoComponentViewModel <AWEPOITagsViewDataSource>

@property (retain, nonatomic) NSString *orderURL;
@property (retain, nonatomic) AWEPOISpuModel *spuModel;
@property (retain, nonatomic) AWEPOIOrderCardModel *orderCardDataModel;
@property (nonatomic) long long spuBizLineType;
@property (nonatomic) long long productType;
@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSString *orderStatusString;
@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (nonatomic) BOOL hasTrackShow;
@property (retain, nonatomic) NSDictionary *itemModel;
@property (nonatomic) double componentWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)tagsView:(id)a0 tagViewForItemAtIndex:(long long)a1;
- (id)trackParamsForAutoTrackWithEventName:(id)a0 params:(id)a1;
- (void)componentViewDidCompleteShow;
- (void)handleTapContainerView:(id)a0;
- (void)handleTapPoiName:(id)a0;
- (id)configView:(id)a0 withTagModel:(id)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)trackEvent:(id)a0;

@end
