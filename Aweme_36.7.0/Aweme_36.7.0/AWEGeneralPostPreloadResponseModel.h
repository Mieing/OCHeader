@class NSArray, NSString;

@interface AWEGeneralPostPreloadResponseModel : AWEBaseBizConfigModel

@property (retain, nonatomic) NSArray *preloadDataList;
@property (copy, nonatomic) NSString *msg;
@property (nonatomic) long long code;

+ (id)preloadDataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
