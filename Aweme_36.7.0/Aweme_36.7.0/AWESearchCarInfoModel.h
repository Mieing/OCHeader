@class NSString, NSArray, AWEURLModel;

@interface AWESearchCarInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *rankList;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) NSArray *carVideoList;
@property (retain, nonatomic) NSString *uri;

+ (id)iconURLJSONTransformer;
+ (id)carVideoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
