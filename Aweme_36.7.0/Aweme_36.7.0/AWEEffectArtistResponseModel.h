@class NSNumber, NSArray;

@interface AWEEffectArtistResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *cursorFrom;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *effectList;

+ (id)hasMoreJSONTransformer;
+ (id)effectListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
