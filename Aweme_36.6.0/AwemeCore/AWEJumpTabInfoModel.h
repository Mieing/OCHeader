@class NSString, AWEURLModel;

@interface AWEJumpTabInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *jumpConfirmTitle;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *clientExtra;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
