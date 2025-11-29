@class NSArray, NSString;

@interface CSJDislikeRequestModel : CSJRequestModel

@property (copy, nonatomic) NSArray *filter_words;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *ad_sdk_version;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *dislike_source;

- (void).cxx_destruct;
- (id)dictionaryValue;

@end
