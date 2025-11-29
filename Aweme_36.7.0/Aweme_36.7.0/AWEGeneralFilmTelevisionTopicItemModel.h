@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEGeneralFilmTelevisionTopicItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *topicID;
@property (nonatomic) BOOL isCommerce;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) AWEURLModel *posterURL;
@property (copy, nonatomic) NSNumber *videoCount;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSArray *videoListArray;

+ (id)posterURLJSONTransformer;
+ (id)videoListArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
