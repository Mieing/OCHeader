@class NSString, AWEBarIconModel, AWEBarTextModel;

@interface AWEKeSongCarouselModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) AWEBarIconModel *headerIcon;
@property (retain, nonatomic) AWEBarTextModel *mainContent;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *trackInfo;

+ (id)headerIconJSONTransformer;
+ (id)mainContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
