@class NSString, AWEURLModel;

@interface AWENearbyCandidateModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long uid;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;

+ (id)avatarURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
