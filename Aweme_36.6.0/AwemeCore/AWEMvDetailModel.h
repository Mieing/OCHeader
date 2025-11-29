@class AWEURLModel, NSString, AWEUserModel, AWEWelfareActivityModel;

@interface AWEMvDetailModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *mvID;
@property (copy, nonatomic) NSString *mvName;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (nonatomic) long long userCount;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isCollected;
@property (retain, nonatomic) AWEWelfareActivityModel *welfareActivityModel;
@property (retain, nonatomic) AWEUserModel *author;

+ (id)iconURLJSONTransformer;
+ (id)welfareActivityModelJSONTransformer;
+ (id)placeholderModel;
+ (id)JSONKeyPathsByPropertyKey;

- (id)welfareActivityID;
- (void).cxx_destruct;

@end
