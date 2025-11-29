@class AWEMediaModel, NSArray;

@interface AWEMusicFoldMediaModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMediaModel *mainMedia;
@property (retain, nonatomic) NSArray *subMediaList;

+ (id)mainMediaJSONTransformer;
+ (id)subMediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
