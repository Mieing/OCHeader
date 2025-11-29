@class AWERiskPreventModel, AWEDoubleColumnSearchMerchandiseInstantInfo, AWEDoubleColumnSearchMerchandiseAddressComponent, NSDictionary, AWEEcommerceSearchKiwiInfoModel, AWEEcommerceSearchJumpToPageConfigModel, AWESearchGlobalDoodleConfigModel, AWEEcommerceSearchAladdinInfoModel, AWEGeneralSearchBackgroundModel, AWEDoubleColumnSearchMerchandiseChunkInfo, NSString, AWEEcommerceGuideSearchV2Model, AWEEcommerceSearchSuspensionItemsSectionModel, AWESearchNilTextModel, AWESearchNilInfoModel, NSArray, AWESearchCorrectModel, AWEEcommerceSearchMerchandiseCardFrameModel, AWEDoubleColumnSearchActivityModel;

@interface AWEDoubleColumnSearchMerchandiseResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfo;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilText;
@property (retain, nonatomic) AWERiskPreventModel *riskPrevent;
@property (nonatomic) long long modeType;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseInstantInfo *instantInfo;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseAddressComponent *addressComponent;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) NSArray *guideSearchWordList;
@property (retain, nonatomic) NSArray *pushTimeFeedOutLynxModel;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2Model *guideSearchV2Model;
@property (copy, nonatomic) NSDictionary *actionReportCfg;
@property (retain, nonatomic) AWEEcommerceSearchKiwiInfoModel *kiwiInfo;
@property (retain, nonatomic) AWEEcommerceSearchAladdinInfoModel *aladdinInfo;
@property (retain, nonatomic) AWEEcommerceSearchJumpToPageConfigModel *jumpToPageConfigModel;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *searchBackgroundConfig;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *searchBackgroundConfigOverride;
@property (copy, nonatomic) NSDictionary *streamTimeCost;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseChunkInfo *chunkInfo;
@property (copy, nonatomic) NSString *ecomSearchPassThrough;
@property (copy, nonatomic) NSString *ecomSearchAllPassThrough;
@property (retain, nonatomic) AWEEcommerceSearchMerchandiseCardFrameModel *goodsCardFrameStruct;
@property (retain, nonatomic) AWEEcommerceSearchSuspensionItemsSectionModel *suspensionItemsSection;
@property (nonatomic) BOOL feedDisableScroll;
@property (copy, nonatomic) NSString *imageUri;
@property (retain, nonatomic) NSArray *detections;
@property (retain, nonatomic) AWEDoubleColumnSearchActivityModel *activityContainer;
@property (copy, nonatomic) NSDictionary *rawLogPassback;

+ (id)pushTimeFeedOutLynxModelJSONTransformer;
+ (id)extraModelJSONTransformer;
+ (id)searchBackgroundConfigJSONTransformer;
+ (id)suspensionItemsSectionJSONTransformer;
+ (id)aladdinInfoJSONTransformer;
+ (id)guideSearchV2ModelJSONTransformer;
+ (id)searchBackgroundConfigOverrideJSONTransformer;
+ (id)activityContainerJSONTransformer;
+ (id)globalCartModelJSONTransformer;
+ (id)resultsJSONTransformer;
+ (id)chunkInfoJSONTransformer;
+ (id)instantInfoJSONTransformer;
+ (id)addressComponentJSONTransformer;
+ (id)kiwiInfoJSONTransformer;
+ (id)jumpToPageConfigModelJSONTransformer;
+ (id)goodsCardFrameStructJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
