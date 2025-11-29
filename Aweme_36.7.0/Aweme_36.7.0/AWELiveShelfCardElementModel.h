@class AWELiveShelfCardElementPreviewModuleModel, AWELiveShelfCardElementTitleModel, AWELiveShelfCardElementLotteryModel, AWELiveShelfCardElementCardBasicModel, NSDictionary, AWELiveShelfCardElementSoldCountModel, AWELiveShelfCardElementGroupModel, AWELiveShelfCardElementSubtitleModel, NSString, AWELiveShelfCardElementActionAreaModel, AWELiveShelfCardElementMarketingModel, NSArray, AWELiveShelfCardElementImageModel;

@interface AWELiveShelfCardElementModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *index;
@property (retain, nonatomic) AWELiveShelfCardElementImageModel *image;
@property (retain, nonatomic) AWELiveShelfCardElementTitleModel *title;
@property (copy, nonatomic) NSDictionary *tabTitle;
@property (copy, nonatomic) NSDictionary *group;
@property (copy, nonatomic) NSDictionary *subtitle;
@property (retain, nonatomic) AWELiveShelfCardElementCardBasicModel *cardBasic;
@property (retain, nonatomic) AWELiveShelfCardElementLotteryModel *lottery;
@property (retain, nonatomic) AWELiveShelfCardElementActionAreaModel *actionArea;
@property (retain, nonatomic) AWELiveShelfCardElementSoldCountModel *soldCount;
@property (retain, nonatomic) AWELiveShelfCardElementMarketingModel *marketing;
@property (copy, nonatomic) NSArray *labels;
@property (copy, nonatomic) NSArray *sellingPointLabels;
@property (retain, nonatomic) AWELiveShelfCardElementPreviewModuleModel *previewModule;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *trackingParams;
@property (copy, nonatomic) NSDictionary *sessionInfo;
@property (copy, nonatomic) NSDictionary *tabSessionInfo;
@property (nonatomic) BOOL isTopExplainingItem;
@property (retain, nonatomic) AWELiveShelfCardElementGroupModel *currentGroup;
@property (retain, nonatomic) AWELiveShelfCardElementSubtitleModel *currentSubtitle;
@property (retain, nonatomic) AWELiveShelfCardElementTitleModel *currentTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelsJSONTransformer;
+ (id)sellingPointLabelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
