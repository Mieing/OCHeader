@class NSString, AWETagLabelModel, AWEAdAggLinkageWithAdEndorse, AWEURLModel;

@interface AWEFullScreenAdEggModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *eggID;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *materialURL;
@property (nonatomic) long long countDownSecs;
@property (nonatomic) long long adEggMaterialType;
@property (copy, nonatomic) NSString *mpURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *complianceData;
@property (retain, nonatomic) AWETagLabelModel *label;
@property (retain, nonatomic) AWEURLModel *trackURLList;
@property (retain, nonatomic) AWEURLModel *clickTrackURLList;
@property (retain, nonatomic) AWEAdAggLinkageWithAdEndorse *linkageModel;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long displayType;
@property (nonatomic) BOOL isEggShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackURLListJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)adEggMaterialTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
