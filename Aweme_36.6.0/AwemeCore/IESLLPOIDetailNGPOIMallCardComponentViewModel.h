@class NSArray, NSString, IESLLPOIHighlightVideoReviewsStruct, IESLLPOIContentItemModel, IESLLPOISeckillInfoModel;

@interface IESLLPOIDetailNGPOIMallCardComponentViewModel : LLDitoComponentViewModel

@property (nonatomic) BOOL hasShown;
@property (nonatomic) long long distanceValue;
@property (retain, nonatomic) IESLLPOIContentItemModel *poiContentItem;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *poiLabel;
@property (copy, nonatomic) NSString *poiBackendType;
@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *floor;
@property (copy, nonatomic) NSString *rankDesc;
@property (copy, nonatomic) NSString *recommendPercent;
@property (retain, nonatomic) IESLLPOIHighlightVideoReviewsStruct *evalution;
@property (nonatomic) long long hasService;
@property (copy, nonatomic) NSString *spuName;
@property (nonatomic) long long spuPrice;
@property (copy, nonatomic) NSString *discountInfo;
@property (nonatomic) long long spuOriginPrice;
@property (copy, nonatomic) NSString *spuUrl;
@property (retain, nonatomic) IESLLPOISeckillInfoModel *seckillInfo;
@property (nonatomic) long long hasSecKillInfo;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *sortID;
@property (copy, nonatomic) NSString *reqID;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) id /* block */ onSelectBlock;

- (id)allTrackerParams;
- (id)channelParams;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)componentViewWillShow;
- (id)thirdBackendTypeName:(id)a0;
- (void)trackPoiClick;
- (double)componentHight:(BOOL)a0;
- (void)trackPoiShow;
- (void)trackFirstShow;
- (id)merchantParams;
- (id)currentSelectStatusParams;
- (id)cardInfoParams;
- (id)poiInfoParams;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)requestParams;

@end
