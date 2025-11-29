@class AWEMessageReachResourceModel, NSString, NSArray, AWEMessageReachCacheModel, AWEMessageReachPreCheckResultModel;
@protocol AWEHomePageBubbleContentConfigProtocol;

@interface AWEMessageReachComponentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long style;
@property (nonatomic) long long level;
@property (nonatomic) double duration;
@property (nonatomic) double validTime;
@property (nonatomic) double redDotRemoveTimestamp;
@property (nonatomic) double dotDowngradeTime;
@property (copy, nonatomic) NSString *limitUid;
@property (copy, nonatomic) NSString *limitDid;
@property (nonatomic) long long notRemoveBadgeUserChange;
@property (nonatomic) long long skipIfPreBlock;
@property (nonatomic) BOOL notRemoveInsideTab;
@property (nonatomic) BOOL sameLevelCanReplace;
@property (copy, nonatomic) NSString *noticeText;
@property (retain, nonatomic) AWEMessageReachResourceModel *resource;
@property (retain, nonatomic) AWEMessageReachCacheModel *cache;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *pitayaTraceID;
@property (copy, nonatomic) NSString *rid;
@property (copy, nonatomic) NSString *serverExtra;
@property (copy, nonatomic) NSArray *strategies;
@property (copy, nonatomic) NSString *traceExtra;
@property (nonatomic) unsigned long long uiType;
@property (nonatomic) unsigned long long downgradeStatus;
@property (retain, nonatomic) AWEMessageReachPreCheckResultModel *precheckResultModel;
@property (retain, nonatomic) id<AWEHomePageBubbleContentConfigProtocol> contentConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceJSONTransformer;
+ (id)cacheJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)strategiesJSONTransformer;

- (void).cxx_destruct;

@end
