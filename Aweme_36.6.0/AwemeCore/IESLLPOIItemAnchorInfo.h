@class IESLLPOISchemaModel, NSString, NSArray, IESLLifeURLModel, IESLLPOIItemAnchorTag, IESLLPOIItemAnchorTransformModel, IESLLPOIDetailModalViewModel, IESLLPOIItemAnchorButtonModel, IESLLPOIItemAnchorBottomButtonModel, NSDictionary, IESLLPOIVideoAnchorCardModel;

@interface IESLLPOIItemAnchorInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isEndMinorTagExpand;
@property (retain, nonatomic) IESLLPOIDetailModalViewModel *modalViewModel;
@property (retain, nonatomic) IESLLPOIItemAnchorTag *suffix;
@property (retain, nonatomic) IESLLPOIItemAnchorTag *livingSuffix;
@property (retain, nonatomic) NSArray *minorTags;
@property (nonatomic) long long minorTagExtendTime;
@property (retain, nonatomic) IESLLifeURLModel *iconURL;
@property (retain, nonatomic) IESLLifeURLModel *serviceIconURL;
@property (retain, nonatomic) NSString *typeName;
@property (nonatomic) BOOL existRelationPOI;
@property (retain, nonatomic) NSArray *intentionOpenTypeArray;
@property (retain, nonatomic) IESLLPOISchemaModel *schemaModel;
@property (copy, nonatomic) NSString *secondActualShowText;
@property (nonatomic) unsigned long long anchorExplorationStyle;
@property (retain, nonatomic) IESLLPOIItemAnchorTransformModel *anchorTransformModel;
@property (retain, nonatomic) IESLLPOIItemAnchorButtonModel *anchorButtonModel;
@property (retain, nonatomic) IESLLPOIItemAnchorBottomButtonModel *anchorBottomButtonModel;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSString *anchorContentJson;
@property (nonatomic) BOOL needRequestCard;
@property (nonatomic) double cardRequestTimeout;
@property (retain, nonatomic) NSDictionary *cardExtraParams;
@property (nonatomic) double cardDataCacheTimeCount;
@property (nonatomic) double cardMinShowTime;
@property (retain, nonatomic) IESLLPOIVideoAnchorCardModel *anchorCardModel;
@property (readonly, nonatomic) BOOL shouldBlockShowDetail;
@property (nonatomic) BOOL didBlockShowDetail;
@property (copy, nonatomic) id /* block */ showDetailBlock;
@property (nonatomic) unsigned long long dataStatus;
@property (nonatomic) unsigned long long actionStatus;
@property (nonatomic) BOOL cardOnShowDisappear;
@property (retain, nonatomic) NSDictionary *cardClickExtraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minorTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getCardLogExtraInfo;
- (void)setMinorTagIsExpandEnd:(BOOL)a0;
- (BOOL)getMinorTagIsExpandEnd;
- (void).cxx_destruct;
- (id)init;

@end
