@class NSArray;

@interface AWEOriginalSoundTrackMediaPageModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *mediaList;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;

+ (id)mediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
