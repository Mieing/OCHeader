@class NSString, NSDictionary, AWETrackerContext, AWEDynamicPatchModel;

@interface AWEEcommerceSearchAladdinInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDynamicPatchModel *aladdinDynamic;
@property (nonatomic) double customMaxHeight;
@property (retain, nonatomic) NSDictionary *logInfo;
@property (nonatomic) BOOL isWrapHeight;
@property (nonatomic) BOOL needPlayFinish;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) BOOL isNativeReportShow;
@property (copy, nonatomic) NSString *aladdinSrc;
@property (retain, nonatomic) AWETrackerContext *trackerContext;
@property (nonatomic) BOOL isTracked;
@property (nonatomic) double realHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aladdinDynamicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
