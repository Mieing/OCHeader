@class NSString, NSDictionary;

@interface AWEFollowingListEntranceInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlV2;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *trackString;
@property (copy, nonatomic) NSDictionary *trackDict;

+ (id)trackDictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
