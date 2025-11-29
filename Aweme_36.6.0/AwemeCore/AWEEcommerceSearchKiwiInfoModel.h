@class NSString, NSDictionary, AWETrackerContext, AWEDynamicPatchModel;

@interface AWEEcommerceSearchKiwiInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDynamicPatchModel *kiwiDynamic;
@property (nonatomic) double customMaxHeight;
@property (retain, nonatomic) NSDictionary *logInfo;
@property (nonatomic) BOOL isWrapHeight;
@property (nonatomic) BOOL needPlayFinish;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) BOOL isNativeReportShow;
@property (copy, nonatomic) NSString *kiwiSrc;
@property (retain, nonatomic) AWETrackerContext *trackerContext;
@property (nonatomic) BOOL isTracked;
@property (nonatomic) double realHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)kiwiDynamicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldAutoFold;
- (void).cxx_destruct;

@end
