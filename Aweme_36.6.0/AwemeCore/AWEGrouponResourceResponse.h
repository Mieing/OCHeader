@class NSArray, AWEGrouponTabGuideModel, NSDictionary, NSString;

@interface AWEGrouponResourceResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *popupList;
@property (retain, nonatomic) NSArray *pendantList;
@property (retain, nonatomic) NSArray *bottomBannerList;
@property (retain, nonatomic) NSArray *activityEntranceList;
@property (retain, nonatomic) AWEGrouponTabGuideModel *guideInfo;
@property (retain, nonatomic) NSDictionary *controlInfo;
@property (copy, nonatomic) NSDictionary *taskConfig;
@property (copy, nonatomic) NSString *triggerSourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)guideInfoJSONTransformer;
+ (id)popupListJSONTransformer;
+ (id)pendantListJSONTransformer;
+ (id)bottomBannerListJSONTransformer;
+ (id)activityEntranceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
