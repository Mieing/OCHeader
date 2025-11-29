@class NSString, NSArray, NSNumber;

@interface ACCMusicCollectionFeedResponse : ACCBaseApiModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *musicCollection;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *hasMore;
@property (copy, nonatomic) NSArray *childrenCollections;
@property (copy, nonatomic) NSArray *mcList;

+ (id)musicCollectionJSONTransformer;
+ (id)childrenCollectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
