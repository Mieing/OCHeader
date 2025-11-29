@class NSArray, NSNumber;

@interface AWEOriginalSoundTrackListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *ostList;
@property (copy, nonatomic) NSArray *chartList;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSArray *mediaList;
@property (copy, nonatomic) NSArray *chartMediaList;
@property (nonatomic) BOOL hasMore;

+ (id)hasMoreJSONTransformer;
+ (id)mediaListJSONTransformer;
+ (id)ostListJSONTransformer;
+ (id)chartListJSONTransformer;
+ (id)chartMediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
