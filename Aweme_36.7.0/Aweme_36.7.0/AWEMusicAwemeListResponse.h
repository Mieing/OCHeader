@class NSArray, NSNumber;

@interface AWEMusicAwemeListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
