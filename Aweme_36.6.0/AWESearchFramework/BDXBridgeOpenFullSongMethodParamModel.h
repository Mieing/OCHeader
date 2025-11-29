@class NSString, NSDictionary, NSArray, NSNumber;

@interface BDXBridgeOpenFullSongMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *open_with_music_id;
@property (copy, nonatomic) NSString *music_id;
@property (copy, nonatomic) NSString *playlist_id;
@property (retain, nonatomic) NSNumber *initial_index;
@property (copy, nonatomic) NSDictionary *media;
@property (copy, nonatomic) NSDictionary *music_extra;
@property (retain, nonatomic) NSArray *playlist_media;
@property (nonatomic) long long music_type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
