@class NSArray, NSDictionary, NSString;

@interface CAKAlbumCollectionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *collectionSectionList;
@property (copy, nonatomic) NSArray *marketCollectionSectionList;
@property (copy, nonatomic) NSDictionary *collectionTaskMap;
@property (copy, nonatomic) NSArray *todayDisplayAndSortedCollectionList;
@property (nonatomic) double lastSortTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectionSectionListJSONTransformer;
+ (id)marketCollectionSectionListJSONTransformer;
+ (id)todayDisplayAndSortedCollectionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
