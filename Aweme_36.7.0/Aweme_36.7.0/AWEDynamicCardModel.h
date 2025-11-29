@class NSString, NSArray, NSDictionary, AWEAwemeModel, AWEDynamicCardControlModel;

@interface AWEDynamicCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *subCardType;
@property (copy, nonatomic) NSString *dcardID;
@property (copy, nonatomic) NSArray *layers;
@property (copy, nonatomic) NSDictionary *commonBizData;
@property (copy, nonatomic) NSDictionary *awemeData;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDynamicCardControlModel *controlModel;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long indexInFeedDataSource;
@property (nonatomic) long long realIndexRelateToFeed;
@property (nonatomic) long long expectedIndexRelateToFeed;
@property (copy, nonatomic) NSString *logID;
@property (readonly, nonatomic) BOOL isFromFeed;
@property (nonatomic) BOOL isLoadFromOldPlugin;
@property (nonatomic) unsigned long long loadStatus;
@property (nonatomic) double insertedTime;
@property (copy, nonatomic) NSString *insertFailReason;
@property (nonatomic) long long souceLinkType;
@property (copy, nonatomic) NSArray *deDupPoiIDs;
@property (nonatomic) BOOL isCached;
@property (nonatomic) long long feedTabType;
@property (nonatomic) unsigned long long dcardState;
@property (copy, nonatomic) NSDictionary *eventTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layersJSONTransformer;
+ (id)commonBizDataJSONTransformer;
+ (id)eventTrackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)mergeData;
- (void).cxx_destruct;
- (id)init;

@end
