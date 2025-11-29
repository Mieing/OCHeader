@class NSString, NSArray, AWEURLModel;

@interface AWEShareSchemaLongVideoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *videoCover;
@property (copy, nonatomic) NSString *videoTitle;
@property (retain, nonatomic) NSArray *reward;
@property (copy, nonatomic) NSString *episodeNumber;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *tagList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
