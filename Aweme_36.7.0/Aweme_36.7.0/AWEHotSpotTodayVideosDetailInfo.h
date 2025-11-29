@class NSString, AWEURLModel;

@interface AWEHotSpotTodayVideosDetailInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) AWEURLModel *urlModel;

+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
