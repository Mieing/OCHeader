@class AWEAwemeModel, NSString, NSArray, AWEDitoPOIFavoriteChannelCellComponentView, NSDictionary, AWEDitoPOIFavoritePageContext, AWEPOILifeCollectTagModel, AWEPOIContentItemModel;

@interface AWEDitoPOIFavoriteChannelCellComponentViewModel : DitoComponentViewModel <AWEPOISyncFeedExtensionGetModelProtocol>

@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (weak, nonatomic) AWEDitoPOIFavoriteChannelCellComponentView *cell;
@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSArray *gifUrls;
@property (retain, nonatomic) NSString *videoUrl;
@property (copy, nonatomic) NSString *videoSource;
@property (nonatomic) BOOL isVideoCollect;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) long long price;
@property (retain, nonatomic) NSString *priceText;
@property (retain, nonatomic) NSString *bizAreaName;
@property (retain, nonatomic) NSString *distance;
@property (retain, nonatomic) NSString *tagUrl;
@property (retain, nonatomic) NSString *collectCount;
@property (retain, nonatomic) NSString *collectTime;
@property (retain, nonatomic) NSString *spuName;
@property (retain, nonatomic) NSString *spuUrl;
@property (nonatomic) long long spuPrice;
@property (retain, nonatomic) NSString *recommendedScore;
@property (retain, nonatomic) NSString *btmString;
@property (retain, nonatomic) AWEPOIContentItemModel *poiContentItem;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *cornerText;
@property (copy, nonatomic) NSDictionary *trackData;
@property (nonatomic) BOOL isFrameHighlight;
@property (nonatomic) BOOL hasBgAniCompleted;
@property (retain, nonatomic) AWEPOILifeCollectTagModel *priceReductionTagModel;
@property (retain, nonatomic) AWEPOILifeCollectTagModel *arrivedTagModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAwemeModel;
- (void)trackCellShow;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (BOOL)shouldShowLargeMode;
- (BOOL)shouldShowPOIName;
- (BOOL)shouldShowArrivedTag;
- (BOOL)shouldShowSubtext;
- (BOOL)shouldShowRankAndRecommend;
- (BOOL)shouldShowSpuInfo;
- (BOOL)shouldShowPriceReductionTag;
- (BOOL)shouldShowCollectTime;
- (id)trackParamsForAutoTrackWithEventName:(id)a0 params:(id)a1;
- (void)openFeed;
- (void)componentViewDidCompleteShow;
- (void)calculateBizAreaStringWithMaxWidth:(double)a0;
- (void)calculateRecommendStringWithMaxWidth:(double)a0;
- (id)syncFeedManager;
- (void)trackClickWithAreaString:(id)a0;
- (BOOL)componentShouldHandleAutoTrackWithEventName:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (long long)lineCount;

@end
