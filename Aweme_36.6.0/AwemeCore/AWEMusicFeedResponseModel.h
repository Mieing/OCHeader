@class NSNumber, NSArray;

@interface AWEMusicFeedResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSArray *mediaList;
@property (retain, nonatomic) NSNumber *totalCount;

+ (id)hasMoreJSONTransformer;
+ (id)mediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
