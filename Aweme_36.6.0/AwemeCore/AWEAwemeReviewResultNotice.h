@class NSString, NSDictionary;

@interface AWEAwemeReviewResultNotice : AWEBaseApiModel

@property (readonly, nonatomic) long long reviewType;
@property (readonly, nonatomic) BOOL shouldTell;
@property (readonly, nonatomic) NSString *linkUrl;
@property (readonly, nonatomic) NSString *videoDetailNoticeBottom;
@property (readonly, nonatomic) NSString *videoDetailNotice;
@property (readonly, nonatomic) NSString *coverNotice;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, copy, nonatomic) NSDictionary *extraDict;

+ (id)shouldTellJSONTransformer;
+ (id)reviewTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
