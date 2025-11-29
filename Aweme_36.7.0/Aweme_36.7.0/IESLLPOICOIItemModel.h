@class IESLLPOIRecommendInfoModel, NSString, NSArray, IESLLPOICOIADInfoModel, IESLLPOIRelationInfoModel, IESLLAwemeModel, IESLLPOICOIDoubleItemDisplayInfoModel, IESLLPOISpuListModuleModel, IESLLPOIContentItemModel;

@interface IESLLPOICOIItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL displayed;
@property (nonatomic) long long orderedIndex;
@property (copy, nonatomic) NSString *reqID;
@property (retain, nonatomic) IESLLPOIContentItemModel *POIInfo;
@property (retain, nonatomic) IESLLPOISpuListModuleModel *productInfo;
@property (retain, nonatomic) IESLLAwemeModel *aweme;
@property (retain, nonatomic) IESLLPOICOIDoubleItemDisplayInfoModel *displayInfo;
@property (retain, nonatomic) IESLLPOIRecommendInfoModel *recommendInfo;
@property (retain, nonatomic) IESLLPOIRelationInfoModel *relationInfo;
@property (copy, nonatomic) NSArray *barrages;
@property (copy, nonatomic) NSString *sortId;
@property (copy, nonatomic) NSArray *feedbacks;
@property (nonatomic) BOOL isAds;
@property (retain, nonatomic) IESLLPOICOIADInfoModel *adInfo;
@property (nonatomic) BOOL isFeedbackAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedbacksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)updateCollectStatus:(BOOL)a0;
- (id)hasShelfService;
- (void).cxx_destruct;

@end
