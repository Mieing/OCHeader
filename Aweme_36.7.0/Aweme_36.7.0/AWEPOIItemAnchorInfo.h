@class AWEPOIVideoAnchorCardModel, NSString, NSArray, AWEPOIItemAnchorTransformModel, AWEPOIItemAnchorBottomButtonModel, AWEPOIVideoAnchorMarginConfigModel, AWEURLModel, NSDictionary, AWEPOISchemaModel, AWEPOIItemAnchorButtonModel, AWEPOIItemAnchorTag, AWEPOIDetailModalViewModel;

@interface AWEPOIItemAnchorInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isEndMinorTagExpand;
@property (retain, nonatomic) AWEPOIDetailModalViewModel *modalViewModel;
@property (retain, nonatomic) AWEPOIItemAnchorTag *suffix;
@property (retain, nonatomic) AWEPOIItemAnchorTag *livingSuffix;
@property (retain, nonatomic) NSArray *minorTags;
@property (nonatomic) long long minorTagExtendTime;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) AWEURLModel *serviceIconURL;
@property (retain, nonatomic) AWEURLModel *iconLightURL;
@property (retain, nonatomic) NSString *typeName;
@property (nonatomic) BOOL existRelationPOI;
@property (retain, nonatomic) NSArray *intentionOpenTypeArray;
@property (retain, nonatomic) AWEPOISchemaModel *schemaModel;
@property (copy, nonatomic) NSString *secondActualShowText;
@property (nonatomic) unsigned long long anchorExplorationStyle;
@property (retain, nonatomic) AWEPOIItemAnchorTransformModel *anchorTransformModel;
@property (retain, nonatomic) AWEPOIItemAnchorButtonModel *anchorButtonModel;
@property (retain, nonatomic) AWEPOIItemAnchorBottomButtonModel *anchorBottomButtonModel;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSString *anchorContentJson;
@property (nonatomic) BOOL needRequestCard;
@property (nonatomic) double cardRequestTimeout;
@property (retain, nonatomic) NSDictionary *cardExtraParams;
@property (nonatomic) double cardDataCacheTimeCount;
@property (nonatomic) double cardMinShowTime;
@property (retain, nonatomic) AWEPOIVideoAnchorCardModel *anchorCardModel;
@property (readonly, nonatomic) BOOL shouldBlockShowDetail;
@property (nonatomic) BOOL didBlockShowDetail;
@property (copy, nonatomic) id /* block */ showDetailBlock;
@property (nonatomic) unsigned long long dataStatus;
@property (nonatomic) unsigned long long actionStatus;
@property (nonatomic) BOOL cardOnShowDisappear;
@property (retain, nonatomic) NSDictionary *cardClickExtraParams;
@property (retain, nonatomic) AWEPOIVideoAnchorMarginConfigModel *marginConfig;
@property (copy, nonatomic) NSString *btmStandData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)iconLightURLJSONTransformer;
+ (id)minorTagsJSONTransformer;
+ (id)marginConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getCardLogExtraInfo;
- (void)setMinorTagIsExpandEnd:(BOOL)a0;
- (BOOL)getMinorTagIsExpandEnd;
- (void).cxx_destruct;
- (id)init;

@end
