@class AWEAdLongVideoDataModel;

@interface AWEAdLongVideoResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAdLongVideoDataModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
