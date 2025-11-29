@class IESLLLiveShelfCardElementMarketingModel, NSDictionary, IESLLLiveShelfCardElementTitleModel, IESLLLiveShelfCardElementPreviewModuleModel, IESLLLiveShelfCardElementActionAreaModel, NSString, IESLLLiveShelfCardElementSubtitleModel, IESLLLiveShelfCardElementLotteryModel, NSArray, IESLLLiveShelfCardElementGroupModel, IESLLLiveShelfCardElementCardBasicModel, IESLLLiveShelfCardElementSoldCountModel, IESLLLiveShelfCardElementImageModel;

@interface IESLLLiveShelfCardElementModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *index;
@property (retain, nonatomic) IESLLLiveShelfCardElementImageModel *image;
@property (retain, nonatomic) IESLLLiveShelfCardElementTitleModel *title;
@property (copy, nonatomic) NSDictionary *tabTitle;
@property (copy, nonatomic) NSDictionary *group;
@property (copy, nonatomic) NSDictionary *subtitle;
@property (retain, nonatomic) IESLLLiveShelfCardElementCardBasicModel *cardBasic;
@property (retain, nonatomic) IESLLLiveShelfCardElementLotteryModel *lottery;
@property (retain, nonatomic) IESLLLiveShelfCardElementActionAreaModel *actionArea;
@property (retain, nonatomic) IESLLLiveShelfCardElementSoldCountModel *soldCount;
@property (retain, nonatomic) IESLLLiveShelfCardElementMarketingModel *marketing;
@property (copy, nonatomic) NSArray *labels;
@property (copy, nonatomic) NSArray *sellingPointLabels;
@property (retain, nonatomic) IESLLLiveShelfCardElementPreviewModuleModel *previewModule;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *trackingParams;
@property (copy, nonatomic) NSDictionary *sessionInfo;
@property (copy, nonatomic) NSDictionary *tabSessionInfo;
@property (nonatomic) BOOL isTopExplainingItem;
@property (retain, nonatomic) IESLLLiveShelfCardElementGroupModel *currentGroup;
@property (retain, nonatomic) IESLLLiveShelfCardElementSubtitleModel *currentSubtitle;
@property (retain, nonatomic) IESLLLiveShelfCardElementTitleModel *currentTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelsJSONTransformer;
+ (id)sellingPointLabelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
