@class NSString, AWEURLModel;

@interface AWEMusicCollectionModel : AWEBaseApiModel

@property (readonly, copy, nonatomic) NSString *collectionID;
@property (readonly, copy, nonatomic) NSString *collectionName;
@property (readonly, copy, nonatomic) AWEURLModel *coverURL;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
