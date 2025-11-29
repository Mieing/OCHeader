@class NSArray, AWEBottomViewConfigModel;

@interface AWEAwemeDetailCustomResponse : AWEAwemeDetailResponse

@property (retain, nonatomic) NSArray *awemeDetails;
@property (retain, nonatomic) AWEBottomViewConfigModel *bottomViewConfig;

+ (id)bottomViewConfigJSONTransformer;
+ (id)awemeDetailsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
