@class NSString, NSArray;

@interface AWESearchMusicAladdinModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *musicAlbum;
@property (readonly, copy, nonatomic) NSString *aladdinID;

+ (id)aladdinIDJSONTransformer;
+ (id)musicAlbumJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
