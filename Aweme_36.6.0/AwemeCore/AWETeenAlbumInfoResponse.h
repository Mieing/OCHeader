@class NSArray;

@interface AWETeenAlbumInfoResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *albumInfos;

+ (id)albumInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
