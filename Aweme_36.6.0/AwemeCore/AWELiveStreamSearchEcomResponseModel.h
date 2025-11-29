@class NSString, NSDictionary, NSArray;

@interface AWELiveStreamSearchEcomResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) double validTime;
@property (retain, nonatomic) NSDictionary *after_feed_params;
@property (copy, nonatomic) NSString *pitaya_upload_info;
@property (copy, nonatomic) NSString *log_id;
@property (retain, nonatomic) NSArray *suggestWordsArray;
@property (nonatomic) long long indexPath;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)suggestWordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)ecomSearchWord;
- (BOOL)isHideWords;
- (void).cxx_destruct;

@end
