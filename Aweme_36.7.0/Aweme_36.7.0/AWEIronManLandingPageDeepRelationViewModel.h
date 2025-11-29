@class NSArray, NSMutableDictionary, AWEIronManLandingPageDataController, NSString, NSDictionary;

@interface AWEIronManLandingPageDeepRelationViewModel : MTLModel <MTLJSONSerializing, AWEIronManLandingPagePreloadProtocol, AWEIronManLandingPageViewModelProtocol, AWEIronManLandingPageTrackerViewModelProtocol>

@property (retain, nonatomic) NSMutableDictionary *trackStatus;
@property (retain, nonatomic) AWEIronManLandingPageDataController *dataVc;
@property (retain, nonatomic) NSArray *modelList;
@property (copy, nonatomic) NSString *deapExtraMicroAppID;
@property (nonatomic) long long totalNum;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long maxPreloadLimit;
@property (nonatomic) unsigned long long uiVersion;
@property (nonatomic) unsigned long long enterFrom;
@property (copy, nonatomic) NSDictionary *bdpExtra;
@property (copy, nonatomic) NSDictionary *commonRequestParamDict;
@property (nonatomic) unsigned long long section;
@property (copy, nonatomic) NSDictionary *commonTrackDict;

+ (id)modelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)preloadItemIfNeed:(id)a0 index:(long long)a1;
- (void)trackEvent:(id)a0 atIndex:(unsigned long long)a1 params:(id)a2;
- (void)refreshDataWithCount:(unsigned long long)a0;
- (id)eventStatusKeyAtIndex:(unsigned long long)a0 event:(id)a1;
- (void)saveSectionData;
- (void).cxx_destruct;
- (id)init;

@end
