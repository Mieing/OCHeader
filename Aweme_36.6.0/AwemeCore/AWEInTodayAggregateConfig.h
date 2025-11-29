@class NSString, NSArray, NSDate;

@interface AWEInTodayAggregateConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long pastType;
@property (copy, nonatomic) NSString *albumKey;
@property (copy, nonatomic) NSString *aggregatedDateRange;
@property (nonatomic) BOOL aggregateVideo;
@property (nonatomic) long long maxVideoDuration;
@property (nonatomic) BOOL aggregateImage;
@property (nonatomic) BOOL sortCreateTime;
@property (nonatomic) long long maxAssetsCount;
@property (nonatomic) BOOL ascending;
@property (nonatomic) long long maxScanPhotoCount;
@property (nonatomic) BOOL isRefresh;
@property (copy, nonatomic) NSArray *tagWeightList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagWeightListJSONTransformer;
+ (id)generateWithStrategyConfig:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

@end
