@class NSString, NSDictionary, AWEPOIContentItemModel, AWEDitoPOIFavoriteLikeVideoCellComponentView, AWEDitoPOIFavoritePageContext, AWEAwemeModel;

@interface AWEDitoPOIFavoriteLikeVideoCellComponentViewModel : DitoComponentViewModel <AWEPOISyncFeedExtensionGetModelProtocol>

@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (retain, nonatomic) AWEPOIContentItemModel *poiInfo;
@property (copy, nonatomic) NSDictionary *trackData;
@property (retain, nonatomic) NSString *btmString;
@property (weak, nonatomic) AWEDitoPOIFavoriteLikeVideoCellComponentView *cell;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *priceText;
@property (copy, nonatomic) NSString *bizAreaName;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *spuName;
@property (copy, nonatomic) NSString *spuIconUrl;
@property (nonatomic) long long spuPrice;
@property (copy, nonatomic) NSString *spuPriceText;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) BOOL shouldAddQuotation;
@property (copy, nonatomic) NSString *likeTime;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly, nonatomic) long long lineCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAwemeModel;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)trackParamsForAutoTrackWithEventName:(id)a0 params:(id)a1;
- (void)openFeed;
- (id)syncFeedManager;
- (void)trackClickWithAreaString:(id)a0;
- (BOOL)checkValidityWithLineIndex:(long long)a0;
- (void)openPOIDetail;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
