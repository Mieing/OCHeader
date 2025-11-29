@class AWEAwemeSearchVideoAiDescModel, NSDictionary, AWEAwemeSearchVideoAbstractModel, AWEDynamicPatchModel, AWESearchRelatedPOIModel, AWESearchAwemeExtraLifeRateInfoModel, NSString, AWESearchVideoKeySegmentModel, AWEAwemeSearchExtraViewControlModel, AWEAwemeSearchExtraVideoFooterLynxModel, NSArray, AWESearchVideoNoteV2Model, AWESearchLiveGoodModel, AWESearchLifeLiveModel, AWESearchVideoNoteModel, AWESearchAIBotAbstract, AWEECommerceSearchCardBTMModel, AWESearchPOIStruct, AWESearchVideoPanelPrefixModel, AWEAwemeSearchVideoVideoSummaryModel, AWESearchVideoCommercialGoodModel;

@interface AWESearchAwemeExtraModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchVideoCommercialGoodModel *videoProduct;
@property (retain, nonatomic) AWESearchLiveGoodModel *liveProduct;
@property (retain, nonatomic) AWESearchLifeLiveModel *lifeLiveInfo;
@property (retain, nonatomic) AWEAwemeSearchExtraVideoFooterLynxModel *videoFooter;
@property (retain, nonatomic) AWESearchRelatedPOIModel *relatedPOIModel;
@property (nonatomic) BOOL isMusicIntention;
@property (retain, nonatomic) AWEAwemeSearchExtraViewControlModel *viewControl;
@property (copy, nonatomic) NSDictionary *logImpression;
@property (copy, nonatomic) NSDictionary *logDict;
@property (copy, nonatomic) NSDictionary *enterInnerInfo;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicHeader;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicBody;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicFooter;
@property (copy, nonatomic) NSString *searchTag;
@property (retain, nonatomic) AWESearchPOIStruct *poiStruct;
@property (retain, nonatomic) AWESearchVideoKeySegmentModel *keySegmentModel;
@property (retain, nonatomic) AWESearchAIBotAbstract *aiBotAbstract;
@property (copy, nonatomic) NSString *aiVideoTitle;
@property (nonatomic) BOOL disableSearchOuterAnchorShow;
@property (retain, nonatomic) AWESearchVideoNoteModel *videoNoteModel;
@property (retain, nonatomic) AWESearchVideoNoteV2Model *videoNoteModelV2;
@property (retain, nonatomic) AWEECommerceSearchCardBTMModel *cardBTMModel;
@property (nonatomic) long long docRank;
@property (retain, nonatomic) NSArray *chapterList;
@property (retain, nonatomic) AWEAwemeSearchVideoVideoSummaryModel *videoSummaryModel;
@property (retain, nonatomic) AWEAwemeSearchVideoAiDescModel *videoAiDesc;
@property (retain, nonatomic) AWEAwemeSearchVideoAbstractModel *videoFullSummary;
@property (copy, nonatomic) NSString *generalAbstract;
@property (nonatomic) BOOL hasGeneralAbstractDoubleTag;
@property (copy, nonatomic) NSString *captionGeneralAbstract;
@property (retain, nonatomic) AWESearchVideoPanelPrefixModel *videoPanelPrefix;
@property (retain, nonatomic) AWESearchVideoPanelPrefixModel *videoPanelOuter;
@property (nonatomic) long long chapterListRepack;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) AWESearchVideoPanelPrefixModel *videoPanelSuffix;
@property (retain, nonatomic) AWESearchAwemeExtraLifeRateInfoModel *lifeRateInfoModel;
@property (copy, nonatomic) NSDictionary *ecomLiveParams;
@property (copy, nonatomic) NSDictionary *feedCardFooterElementParams;
@property (retain, nonatomic) AWEDynamicPatchModel *footerPatchDynamicModel;

+ (id)chapterListJSONTransformer;
+ (id)videoProductJSONTransformer;
+ (id)videoNoteModelV2JSONTransformer;
+ (id)videoPanelPrefixJSONTransformer;
+ (id)lifeLiveInfoJSONTransformer;
+ (id)liveProductJSONTransformer;
+ (id)videoFooterJSONTransformer;
+ (id)viewControlJSONTransformer;
+ (id)dynamicHeaderJSONTransformer;
+ (id)dynamicBodyJSONTransformer;
+ (id)dynamicFooterJSONTransformer;
+ (id)poiStructJSONTransformer;
+ (id)relatedPOIModelJSONTransformer;
+ (id)keySegmentModelJSONTransformer;
+ (id)aiBotAbstractJSONTransformer;
+ (id)videoNoteModelJSONTransformer;
+ (id)cardBTMModelJSONTransformer;
+ (id)videoSummaryModelJSONTransformer;
+ (id)videoPanelSuffixJSONTransformer;
+ (id)videoPanelOuterJSONTransformer;
+ (id)videoAiDescModelJSONTransformer;
+ (id)videoFullSummaryJSONTransformer;
+ (id)lifeRateInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)updateLogData:(id)a0;
- (void).cxx_destruct;

@end
