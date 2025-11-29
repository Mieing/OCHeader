@class AWEPOICOIDoubleItemDisplayInfoModel, NSString, AWEPOISpuListModuleModel, AWEAwemeModel, AWEPOIRelationInfoModel, NSArray, AWEPOIRecommendInfoModel, AWEPOICOIADInfoModel, AWEPOIContentItemModel;

@interface AWEPOICOIItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL displayed;
@property (nonatomic) long long orderedIndex;
@property (copy, nonatomic) NSString *reqID;
@property (retain, nonatomic) AWEPOIContentItemModel *POIInfo;
@property (retain, nonatomic) AWEPOISpuListModuleModel *productInfo;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEPOICOIDoubleItemDisplayInfoModel *displayInfo;
@property (retain, nonatomic) AWEPOIRecommendInfoModel *recommendInfo;
@property (retain, nonatomic) AWEPOIRelationInfoModel *relationInfo;
@property (copy, nonatomic) NSArray *barrages;
@property (copy, nonatomic) NSString *sortId;
@property (copy, nonatomic) NSArray *feedbacks;
@property (nonatomic) BOOL isAds;
@property (retain, nonatomic) AWEPOICOIADInfoModel *adInfo;
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
