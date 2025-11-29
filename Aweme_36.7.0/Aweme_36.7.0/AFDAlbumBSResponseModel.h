@class NSArray;

@interface AFDAlbumBSResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *albumImagesBSArray;

+ (id)albumImagesBSArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
