@class NSString, AWEPOINearbyHotRankInfo, AWEURLModel;

@interface AWEPOINearbyHotRankPOI : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCollect;
@property (retain, nonatomic) AWEURLModel *poiURL;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *hotName;
@property (copy, nonatomic) NSString *poiScheme;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AWEPOINearbyHotRankInfo *rankInfo;
@property (nonatomic) long long currentPage;
@property (nonatomic) long long totalPageNum;
@property (nonatomic) long long nextCursor;
@property (retain, nonatomic) AWEURLModel *poiIcon;
@property (retain, nonatomic) NSString *serviceExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rankInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)poiDistance;
- (id)poiViewCountText;
- (void).cxx_destruct;

@end
