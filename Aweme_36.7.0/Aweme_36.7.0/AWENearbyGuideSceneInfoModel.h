@class AWENearbyEnterBubbleModel, NSString, AWENearbySearchTransInfo, AWENearbyGuideFloatBackModel, AWENearbyC2AutoPlayModel, NSDictionary, NSMutableDictionary, NSNumber, AWENearbyOpenSubPageModel;

@interface AWENearbyGuideSceneInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *atomicTask;
@property (retain, nonatomic) NSNumber *guideContextTrigger;
@property (retain, nonatomic) NSNumber *openSubPageTrigger;
@property (nonatomic) long long guideType;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *feedGidInfo;
@property (copy, nonatomic) NSString *transformerExposeInfo;
@property (copy, nonatomic) NSString *resourceTransInfo;
@property (copy, nonatomic) NSString *commonTransInfo;
@property (copy, nonatomic) NSString *firstPullScene;
@property (copy, nonatomic) NSString *preTipText;
@property (copy, nonatomic) NSString *liveSmallScreenID;
@property (nonatomic) long long bubbleTypeIfNearbyBubble;
@property (retain, nonatomic) NSDictionary *guideContext;
@property (nonatomic) BOOL avoidDialog;
@property (retain, nonatomic) NSMutableDictionary *feedTrackParams;
@property (retain, nonatomic) NSMutableDictionary *transformerTrackParams;
@property (retain, nonatomic) NSMutableDictionary *transformerUpdateInfo;
@property (retain, nonatomic) AWENearbyGuideFloatBackModel *floatBackInfo;
@property (retain, nonatomic) AWENearbySearchTransInfo *searchTransInfo;
@property (nonatomic) double guideReadyTimeStamp;
@property (nonatomic) double enterNearbyTimeStamp;
@property (retain, nonatomic) AWENearbyC2AutoPlayModel *nearbyC2AutoPlayModel;
@property (retain, nonatomic) AWENearbyOpenSubPageModel *subpageOpenModel;
@property (retain, nonatomic) AWENearbyEnterBubbleModel *enterBubbleModel;
@property (retain, nonatomic) NSDictionary *commonGuideTrackParams;
@property (copy, nonatomic) NSString *grouponSearchParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)nearbyC2AutoPlayModelJSONTransformer;
+ (id)floatBackInfoJSONTransformer;
+ (id)subpageOpenModelJSONTransformer;
+ (id)searchTransInfoJSONTransformer;
+ (id)enterBubbleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)addGuideContext:(id)a0;
- (BOOL)shouldTriggerGuideContext;
- (BOOL)shouldOpenSubPageTrigger;
- (void).cxx_destruct;
- (id)init;

@end
