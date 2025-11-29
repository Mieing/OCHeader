@class NSString, NSArray, AWEMusicChorusModel;

@interface AWEMusicSongModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *songID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *artists;
@property (retain, nonatomic) AWEMusicChorusModel *chorus;
@property (retain, nonatomic) NSArray *chorusV3Infos;

+ (id)artistsJSONTransformer;
+ (id)chorusJSONTransformer;
+ (id)chorusV3InfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
