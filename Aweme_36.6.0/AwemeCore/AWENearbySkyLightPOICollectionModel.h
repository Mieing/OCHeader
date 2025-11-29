@class NSString, AWEURLModel;

@interface AWENearbySkyLightPOICollectionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiItemID;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *distance;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (nonatomic) BOOL isRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
